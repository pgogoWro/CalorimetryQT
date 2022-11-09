#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "dataofdmpc.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void drawingCurve();
    void clearDataCurve();
    void addDataVector();
    QVector<double> dmpcX,dmpcY;//vectors to loading data inside mainwindow class

private slots:
    void on_startDrawing_clicked();



    void on_clearCurve_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
