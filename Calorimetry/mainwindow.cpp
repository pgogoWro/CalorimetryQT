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

    ui->plot->xAxis->setRange(285,315);
    ui->plot->yAxis->setRange(-50,200);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::drawingCurve(){

    ui->plot->graph(0)->setData(dmpcX,dmpcY);
    ui->plot->replot();
    ui->plot->update();
}

void MainWindow::clearDataCurve(){
    dmpcX.clear();
    dmpcY.clear();
}

void MainWindow::addDataVector(){
    DataOfLipids x,y;
    dmpcX = x.getX();
    dmpcY = y.getY();
}


void MainWindow::on_startDrawing_clicked(){
    addDataVector();
    drawingCurve();
}


void MainWindow::on_clearCurve_clicked(){
    clearDataCurve();
    drawingCurve();
}

