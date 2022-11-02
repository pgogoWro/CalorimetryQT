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
    ui->plot->yAxis->setRange(-20,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawingCurve()
{
    DataOfLipids x,y;



    dmpcX = x.getX();
    dmpcY = y.getY();

    ui->plot->graph(0)->setData(dmpcX,dmpcY);
    ui->plot->replot();
    ui->plot->update();
}


void MainWindow::on_startDrawing_clicked()
{
    drawingCurve();
}

