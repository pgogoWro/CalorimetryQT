#include "mainwindow.h"
#include "dataofdmpc.h"
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

    ui->plot->xAxis->setRange(285,315);
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
    } else if (ui->dmpgButton->isChecked()){
        DataOfDMPG x,y;
        vectorX = x.getX();
        vectorY = y.getY();
    }else{
        ui->infoBox->setText("Brak wybranego lipidu \n No lipid selected");
    }
}


void MainWindow::on_startDrawing_clicked(){
    addDataVector();
    drawingCurve();
}


void MainWindow::on_clearCurve_clicked(){
    clearDataCurve();
    drawingCurve();
}

