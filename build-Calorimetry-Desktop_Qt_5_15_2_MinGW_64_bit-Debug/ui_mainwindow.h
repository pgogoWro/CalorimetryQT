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
    QTextBrowser *infoBox;
    QTextBrowser *textBrowser;
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

        infoBox = new QTextBrowser(centralwidget);
        infoBox->setObjectName(QString::fromUtf8("infoBox"));
        infoBox->setGeometry(QRect(470, 370, 256, 181));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(430, 340, 61, 31));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
