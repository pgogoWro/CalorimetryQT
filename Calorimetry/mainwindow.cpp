#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVector>

QVector <double> dpmcX = {1, 2, 3, 4, 5,6,7,8,9,10};// zamienic na qvector moze pomoze bo w projekcie plot tez pojawialo sie w lini z set data "no matching member function for call to setData"
QVector <double> dpmcY = {1, 2, 3, 4, 5,6,7,8,9,10};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->plot->setInteraction(QCP::iRangeDrag, true);
    ui->plot->setInteraction(QCP::iRangeZoom, true);
    ui->plot->addGraph();

    ui->plot->xAxis->setRange(0,10);
    ui->plot->yAxis->setRange(0,10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawingCurve()
{
    ui->plot->graph(0)->setData(dpmcX,dpmcX);
    ui->plot->replot();
    ui->plot->update();
}


void MainWindow::on_startDrawing_clicked()
{
    drawingCurve();
}

