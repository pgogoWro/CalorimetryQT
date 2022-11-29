#include "mainwindow.h"
#include "analysiswindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    AnalysisWindow analysis;
    analysis.show();
    return a.exec();
}
