#include "analysiscurve.h"

AnalysisCurve::AnalysisCurve()
{

}

void AnalysisCurve::setNewVectorForAnalysis(){
    for (int i=0; i < MainWindow::vectorX.size(); i++) {
        if (vectorX[i] == MainWindow::ui->startPik->value()) {
            break;
        }

    }
}
