#ifndef ANALYSISWINDOW_H
#define ANALYSISWINDOW_H

#include <QVector>
#include <QWidget>
#include <QDebug>

namespace Ui {
class AnalysisWindow;
}

class AnalysisWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AnalysisWindow(QWidget *parent = nullptr);
    ~AnalysisWindow();
    void loadVectorFromMainWindow( QVector <double> p_vectorX, QVector <double> p_VectorY);
    void setNewVectorForAnalysis();
    void areaUnderTheCurve();
    double getValueAreaUTC();

private slots:
    void on_analysisButton_clicked();

private:
    Ui::AnalysisWindow *ui;
    QVector <double> vecX;
    QVector <double> vecY;
    double start , end ; // value for start and end peak, for choose proper vector
    int stIndex = 0, enIndex = 0;
    int sIndex = 0, fIndex = 0; // for index new vector, for analysis
    double valueAreaUnderTheCurve = 0;
};

#endif // ANALYSISWINDOW_H
