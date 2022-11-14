/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *plot;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *tempStartSetName;
    QDoubleSpinBox *startTempSet;
    QVBoxLayout *verticalLayout_2;
    QLabel *tempStopSetName;
    QDoubleSpinBox *stopTempSet;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *dmpcButton;
    QRadioButton *dppcButton;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *dmpgButton;
    QRadioButton *unknowButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *startDrawing;
    QPushButton *clearCurve;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
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
    QTextBrowser *infoBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plot = new QCustomPlot(centralwidget);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(10, 10, 781, 321));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 340, 194, 211));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 179, 196));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tempStartSetName = new QLabel(layoutWidget);
        tempStartSetName->setObjectName(QString::fromUtf8("tempStartSetName"));
        tempStartSetName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tempStartSetName);

        startTempSet = new QDoubleSpinBox(layoutWidget);
        startTempSet->setObjectName(QString::fromUtf8("startTempSet"));
        startTempSet->setDecimals(3);
        startTempSet->setMinimum(280.000000000000000);
        startTempSet->setMaximum(310.000000000000000);
        startTempSet->setSingleStep(0.015000000000000);

        verticalLayout->addWidget(startTempSet);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tempStopSetName = new QLabel(layoutWidget);
        tempStopSetName->setObjectName(QString::fromUtf8("tempStopSetName"));
        tempStopSetName->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(tempStopSetName);

        stopTempSet = new QDoubleSpinBox(layoutWidget);
        stopTempSet->setObjectName(QString::fromUtf8("stopTempSet"));
        stopTempSet->setDecimals(3);
        stopTempSet->setMinimum(300.000000000000000);
        stopTempSet->setMaximum(340.000000000000000);
        stopTempSet->setSingleStep(0.015000000000000);

        verticalLayout_2->addWidget(stopTempSet);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dmpcButton = new QRadioButton(layoutWidget);
        dmpcButton->setObjectName(QString::fromUtf8("dmpcButton"));

        horizontalLayout_3->addWidget(dmpcButton);

        dppcButton = new QRadioButton(layoutWidget);
        dppcButton->setObjectName(QString::fromUtf8("dppcButton"));

        horizontalLayout_3->addWidget(dppcButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dmpgButton = new QRadioButton(layoutWidget);
        dmpgButton->setObjectName(QString::fromUtf8("dmpgButton"));

        horizontalLayout_2->addWidget(dmpgButton);

        unknowButton = new QRadioButton(layoutWidget);
        unknowButton->setObjectName(QString::fromUtf8("unknowButton"));

        horizontalLayout_2->addWidget(unknowButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startDrawing = new QPushButton(layoutWidget);
        startDrawing->setObjectName(QString::fromUtf8("startDrawing"));

        horizontalLayout->addWidget(startDrawing);

        clearCurve = new QPushButton(layoutWidget);
        clearCurve->setObjectName(QString::fromUtf8("clearCurve"));

        horizontalLayout->addWidget(clearCurve);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 2);


        verticalLayout_5->addLayout(gridLayout);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(210, 340, 208, 211));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 211, 193));
        verticalLayout_7 = new QVBoxLayout(layoutWidget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_6);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        startPik = new QDoubleSpinBox(layoutWidget1);
        startPik->setObjectName(QString::fromUtf8("startPik"));
        startPik->setDecimals(3);
        startPik->setMinimum(290.000000000000000);
        startPik->setMaximum(320.000000000000000);
        startPik->setSingleStep(0.015000000000000);

        horizontalLayout_6->addWidget(startPik);

        endPik = new QDoubleSpinBox(layoutWidget1);
        endPik->setObjectName(QString::fromUtf8("endPik"));
        endPik->setDecimals(3);
        endPik->setMinimum(300.000000000000000);
        endPik->setMaximum(320.000000000000000);
        endPik->setSingleStep(0.015000000000000);

        horizontalLayout_6->addWidget(endPik);

        analysisButton = new QPushButton(layoutWidget1);
        analysisButton->setObjectName(QString::fromUtf8("analysisButton"));

        horizontalLayout_6->addWidget(analysisButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_5->addWidget(label_4);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lcdnumber = new QLCDNumber(layoutWidget1);
        lcdnumber->setObjectName(QString::fromUtf8("lcdnumber"));

        horizontalLayout_4->addWidget(lcdnumber);

        lcdNumber_2 = new QLCDNumber(layoutWidget1);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout_4->addWidget(lcdNumber_2);

        areaUnderCurve = new QLCDNumber(layoutWidget1);
        areaUnderCurve->setObjectName(QString::fromUtf8("areaUnderCurve"));

        horizontalLayout_4->addWidget(areaUnderCurve);


        verticalLayout_7->addLayout(horizontalLayout_4);

        infoBox = new QTextBrowser(centralwidget);
        infoBox->setObjectName(QString::fromUtf8("infoBox"));
        infoBox->setGeometry(QRect(470, 370, 256, 181));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Konfiguracja pomiar\303\263w<br/>Configuration of measurements</span></p></body></html>", nullptr));
        tempStartSetName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Temperatura<br/> pocz\304\205tkowa</p></body></html>", nullptr));
        tempStopSetName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Temperatura<br/>ko\305\204cowa</p></body></html>", nullptr));
        dmpcButton->setText(QCoreApplication::translate("MainWindow", "DMPC", nullptr));
        dppcButton->setText(QCoreApplication::translate("MainWindow", "DPPC", nullptr));
        dmpgButton->setText(QCoreApplication::translate("MainWindow", "DMPG", nullptr));
        unknowButton->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        startDrawing->setText(QCoreApplication::translate("MainWindow", "Draw/Rysuj", nullptr));
        clearCurve->setText(QCoreApplication::translate("MainWindow", "Clear/Wyczy\305\233\304\207", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Analiza pomiar\303\263w<br/>Analysis of measurements</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Pocz\304\205tek<br/>piku</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Koniec<br/>piku</p></body></html>", nullptr));
        label_8->setText(QString());
        analysisButton->setText(QCoreApplication::translate("MainWindow", "Analiza", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Temperatura<br/>przej\305\233cia<br/>fazowego [K]</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Szeroko\305\233\304\207<br/>po\305\202\303\263wkowa</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Pole<br/>pod<br/>pikiem</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
