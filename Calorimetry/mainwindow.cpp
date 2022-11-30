#include "mainwindow.h"
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
    connect(ui->plot, SIGNAL(mousePress(QMouseEvent*)), SLOT(clickedGraph(QMouseEvent*)));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::drawingCurve(){//working

    ui->plot->graph(0)->setData(vectorX,vectorY);
    ui->plot->replot();
    ui->plot->update();
}

void MainWindow::clearDataCurve(){//working
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

void MainWindow::setStartPeak() // working
{
    if(ui->startPik->value() != 0){
    sPeak = ui->startPik->value();
    }else{
        ui->infoBox->setText("Brak wpisanej wartości początkowej piku \n No initial peak value was entered");
    }
}

void MainWindow::setEndPeak() // working
{
    if(ui->endPik->value() != 0){
    fPeak = ui->endPik->value();
    }else{
        ui->infoBox->setText("Brak wpisanej wartości początkowej piku \n No initial peak value was entered");
    }
}

void MainWindow::getXPositionOfStartPeak()
{
   // sPeak = (ui->plot->xAxis->pixelToCoord(point.x()));
}

void MainWindow::setNewVectorForAnalysis()
{
    for (int i=0; i < vectorX.size(); i++) {
        if (vectorX[i] != sPeak) {
            stIndex++;
        }else{
            sIndex = stIndex;
            break;
        }
    }
    for (int i=0; i < vectorX.size(); i++){
        if (vectorX[i] != fPeak){
            enIndex++;
        }else{
            fIndex = enIndex;
            break;
        }
    }
    qDebug()<<"wartosc indeksu poczatku piku sIndex"<< sIndex;
    qDebug()<<"wartosc indeksu poczatku piku stIndex z petli"<< stIndex;
    qDebug()<<"wartosc indeksu konca piku fIndex"<< fIndex;
    qDebug()<<"wartosc indeksu konca piku enIndex z petli"<< enIndex;
}

void MainWindow::areaUnderTheCurve()
{
    setNewVectorForAnalysis();

    for(int i=sIndex;i<fIndex; i++){
        valueAreaUnderTheCurve+=(vectorY[i]*0.015);
    }
}

double MainWindow::getValueAreaUTC()
{
    areaUnderTheCurve();
    return valueAreaUnderTheCurve;
}
void MainWindow::on_startDrawing_clicked(){ //working method
    addDataVector(); //add random vector to the graph

    ui->plot->xAxis->setRange(ui->startTempSet->value(),ui->stopTempSet->value());
    drawingCurve();

}


void MainWindow::on_clearCurve_clicked(){//working method
    clearDataCurve();
    drawingCurve();
}



//    if(vectorX.size()!=2000 && vectorY.size()!=2000){
//        ui->infoBox->setText("Przeprowadź konfiguracje pomiarów, a następnie odczytaj początek i koniec piku \n Perform measurement setups and then read peak start and end points");
//    }else{
//   /* Analysis dataForAnalysis;
//    areaUTC = dataForAnalysis.getValueAreaUTC()*/;

////    QString value = QString::number(areaUTC);
////    qDebug()<<areaUTC;
////    ui->textBrowser->setText(value);
////    ui->areaUnderCurve->display(areaUTC);




void MainWindow::on_analysisButton_clicked()
{
    setStartPeak();
    setEndPeak();
    setNewVectorForAnalysis();
}

