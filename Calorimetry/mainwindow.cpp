#include "mainwindow.h"
#include "analysis.h"
#include "qcustomplot.h"
#include "ui_mainwindow.h"
#include <iostream>





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->plot->setInteraction(QCP::iRangeDrag, true);
    ui->plot->setInteraction(QCP::iRangeZoom, true);
    ui->plot->addGraph();


    ui->plot->yAxis->setRange(-50,200);
}

MainWindow::~MainWindow(){
    delete ui;
}





void MainWindow::drawingCurve(){

    ui->plot->graph(0)->setData(vectorX,vectorY);
    ui->plot->replot();
    ui->plot->update();
}

void MainWindow::clearDataCurve(){
    vectorX.clear();
    vectorY.clear();
}

void MainWindow::addDataVector(){//working method
    if(ui->dmpcButton->isChecked()){
        DataOfDMPC x,y;
        vectorX = x.getX();
        vectorY = y.getY();
    }else if (ui->dmpgButton->isChecked()){
        DataOfDMPG x,y;
        vectorX = x.getX();
        vectorY = y.getY();
    }else if (ui->dppcButton->isChecked()){
        DataOfDPPC x,y;
        vectorX = x.getX();
        vectorY = y.getY();
    }else if (ui->unknowButton->isChecked()){

        int index = QRandomGenerator::global()->bounded(2);

        if (index == 0){
            DataOfDPPC x,y;
            vectorX = x.getX();
            vectorY = y.getY();
        }else if (index == 1){
            DataOfDMPG x,y;
            vectorX = x.getX();
            vectorY = y.getY();
        }else if (index == 2){
            DataOfDMPC x,y;
            vectorX = x.getX();
            vectorY = y.getY();
        }
    }
    else{
        ui->infoBox->setText("Brak wybranego lipidu \n No lipid selected");
    }
}

QVector<double> &MainWindow::getVectorX() //chyba nie dziala ten getter, jest uzywany w klasie analiza, chociaz vectorX jest poprawny
{
    return vectorX;
}

QVector<double> &MainWindow::getVectorY() //chyba nie dziala ten getter, jest uzywany w klasie analiza, chociaz vectorY jest poprawny
{
    return vectorY;
}


double MainWindow::getStartPeak(){//working method
    if(ui->startPik->value() != 0){
    sPeak = ui->startPik->value();
    }else{
        ui->infoBox->setText("Brak wpisanej wartości początkowej piku \n No initial peak value was entered");
    }
     // qDebug()<<sPeak; working
    return sPeak; // start peak choosen by student
}

double MainWindow::getEndPeak(){//working method
    if(ui->endPik->value() != 0){
    fPeak = ui->endPik->value();
    }else{
        ui->infoBox->setText("Brak wpisanej wartości początkowej piku \n No initial peak value was entered");
    }
     // qDebug()<<fPeak; working
    return fPeak; // end peak choosen by student
}


void MainWindow::on_startDrawing_clicked(){ //working method
    addDataVector(); //add random vector to the graph
     // qDebug()<<vectorX; working
     // qDebug()<<vectorY; working
    ui->plot->xAxis->setRange(ui->startTempSet->value(),ui->stopTempSet->value());
    drawingCurve();
}


void MainWindow::on_clearCurve_clicked(){//working method
    clearDataCurve();
    drawingCurve();
}


void MainWindow::on_analysisButton_clicked(){//not working method

        getStartPeak();
        getEndPeak();
        getVectorX();
        getVectorY();

        qDebug()<<sPeak;
        qDebug()<<fPeak;
        //qDebug()<<vectorX; // vectorXi vectorY istnieja lecz nie sa przesylane do analizy

    if(vectorX.size()!=2000 && vectorY.size()!=2000){
        ui->infoBox->setText("Przeprowadź konfiguracje pomiarów, a następnie odczytaj początek i koniec piku \n Perform measurement setups and then read peak start and end points");
    }else{
    Analysis dataForAnalysis;
    areaUTC = dataForAnalysis.getValueAreaUTC();

//    QString value = QString::number(areaUTC);
//    qDebug()<<areaUTC;
//    ui->textBrowser->setText(value);
//    ui->areaUnderCurve->display(areaUTC);
    }
}

