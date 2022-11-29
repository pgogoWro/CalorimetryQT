/********************************************************************************
** Form generated from reading UI file 'analysiswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISWINDOW_H
#define UI_ANALYSISWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalysisWindow
{
public:
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *startPik;
    QDoubleSpinBox *endPik;
    QPushButton *analysisButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *lcdnumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *areaUnderCurve;

    void setupUi(QWidget *AnalysisWindow)
    {
        if (AnalysisWindow->objectName().isEmpty())
            AnalysisWindow->setObjectName(QString::fromUtf8("AnalysisWindow"));
        AnalysisWindow->resize(400, 300);
        groupBox_2 = new QGroupBox(AnalysisWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 20, 231, 213));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_6);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        startPik = new QDoubleSpinBox(groupBox_2);
        startPik->setObjectName(QString::fromUtf8("startPik"));
        startPik->setDecimals(3);
        startPik->setMinimum(290.000000000000000);
        startPik->setMaximum(320.000000000000000);
        startPik->setSingleStep(0.015000000000000);

        horizontalLayout_6->addWidget(startPik);

        endPik = new QDoubleSpinBox(groupBox_2);
        endPik->setObjectName(QString::fromUtf8("endPik"));
        endPik->setDecimals(3);
        endPik->setMinimum(300.000000000000000);
        endPik->setMaximum(320.000000000000000);
        endPik->setSingleStep(0.015000000000000);

        horizontalLayout_6->addWidget(endPik);

        analysisButton = new QPushButton(groupBox_2);
        analysisButton->setObjectName(QString::fromUtf8("analysisButton"));

        horizontalLayout_6->addWidget(analysisButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_5->addWidget(label_4);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lcdnumber = new QLCDNumber(groupBox_2);
        lcdnumber->setObjectName(QString::fromUtf8("lcdnumber"));

        horizontalLayout_4->addWidget(lcdnumber);

        lcdNumber_2 = new QLCDNumber(groupBox_2);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout_4->addWidget(lcdNumber_2);

        areaUnderCurve = new QLCDNumber(groupBox_2);
        areaUnderCurve->setObjectName(QString::fromUtf8("areaUnderCurve"));

        horizontalLayout_4->addWidget(areaUnderCurve);


        verticalLayout_7->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);


        retranslateUi(AnalysisWindow);

        QMetaObject::connectSlotsByName(AnalysisWindow);
    } // setupUi

    void retranslateUi(QWidget *AnalysisWindow)
    {
        AnalysisWindow->setWindowTitle(QCoreApplication::translate("AnalysisWindow", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("AnalysisWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Analiza pomiar\303\263w<br/>Analysis of measurements</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("AnalysisWindow", "<html><head/><body><p>Pocz\304\205tek<br/>piku</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("AnalysisWindow", "<html><head/><body><p>Koniec<br/>piku</p></body></html>", nullptr));
        label_8->setText(QString());
        analysisButton->setText(QCoreApplication::translate("AnalysisWindow", "Analiza", nullptr));
        label_2->setText(QCoreApplication::translate("AnalysisWindow", "<html><head/><body><p>Temperatura<br/>przej\305\233cia<br/>fazowego [K]</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("AnalysisWindow", "<html><head/><body><p>Szeroko\305\233\304\207<br/>po\305\202\303\263wkowa</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("AnalysisWindow", "<html><head/><body><p>Pole<br/>pod<br/>pikiem</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalysisWindow: public Ui_AnalysisWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISWINDOW_H
