#include "mainwindow.h"
#include "qcustomplot.h"
#include "ui_mainwindow.h"




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

void MainWindow::addDataVector(){
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


void MainWindow::on_startDrawing_clicked(){
    addDataVector();
    ui->plot->xAxis->setRange(ui->startTempSet->value(),ui->stopTempSet->value());
    drawingCurve();
}


void MainWindow::on_clearCurve_clicked(){
    clearDataCurve();
    drawingCurve();
}


void MainWindow::on_analysisButton_clicked()
{
    if(vectorX.size()!=2000 && vectorY.size()!=2000){
        ui->infoBox->setText("Przeprowadź konfiguracje pomiarów, a następnie odczytaj początek i koniec piku \n Perform measurement setups and then read peak start and end points");
    }else{

    }
}

