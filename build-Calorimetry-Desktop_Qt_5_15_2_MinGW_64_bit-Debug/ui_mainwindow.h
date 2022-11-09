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
#include <QtWidgets/QSpinBox>
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
    QWidget *widget;
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
    QWidget *widget1;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
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
        plot->setGeometry(QRect(10, 10, 781, 341));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 360, 194, 200));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 174, 180));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tempStartSetName = new QLabel(widget);
        tempStartSetName->setObjectName(QString::fromUtf8("tempStartSetName"));
        tempStartSetName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tempStartSetName);

        startTempSet = new QDoubleSpinBox(widget);
        startTempSet->setObjectName(QString::fromUtf8("startTempSet"));

        verticalLayout->addWidget(startTempSet);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tempStopSetName = new QLabel(widget);
        tempStopSetName->setObjectName(QString::fromUtf8("tempStopSetName"));
        tempStopSetName->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(tempStopSetName);

        stopTempSet = new QDoubleSpinBox(widget);
        stopTempSet->setObjectName(QString::fromUtf8("stopTempSet"));

        verticalLayout_2->addWidget(stopTempSet);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dmpcButton = new QRadioButton(widget);
        dmpcButton->setObjectName(QString::fromUtf8("dmpcButton"));

        horizontalLayout_3->addWidget(dmpcButton);

        dppcButton = new QRadioButton(widget);
        dppcButton->setObjectName(QString::fromUtf8("dppcButton"));

        horizontalLayout_3->addWidget(dppcButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dmpgButton = new QRadioButton(widget);
        dmpgButton->setObjectName(QString::fromUtf8("dmpgButton"));

        horizontalLayout_2->addWidget(dmpgButton);

        unknowButton = new QRadioButton(widget);
        unknowButton->setObjectName(QString::fromUtf8("unknowButton"));

        horizontalLayout_2->addWidget(unknowButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startDrawing = new QPushButton(widget);
        startDrawing->setObjectName(QString::fromUtf8("startDrawing"));

        horizontalLayout->addWidget(startDrawing);

        clearCurve = new QPushButton(widget);
        clearCurve->setObjectName(QString::fromUtf8("clearCurve"));

        horizontalLayout->addWidget(clearCurve);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 2);


        verticalLayout_5->addLayout(gridLayout);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(220, 360, 208, 197));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 10, 208, 177));
        verticalLayout_7 = new QVBoxLayout(widget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_5);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_6);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_6->addWidget(spinBox);

        spinBox_2 = new QSpinBox(widget1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_6->addWidget(spinBox_2);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_5->addWidget(label_4);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lcdNumber = new QLCDNumber(widget1);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout_4->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(widget1);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout_4->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(widget1);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        horizontalLayout_4->addWidget(lcdNumber_3);


        verticalLayout_7->addLayout(horizontalLayout_4);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(470, 370, 256, 181));
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
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Konfiguracja pomiar\303\263w</span></p></body></html>", nullptr));
        tempStartSetName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Temperatura<br/> pocz\304\205tkowa</p></body></html>", nullptr));
        tempStopSetName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Temperatura<br/>ko\305\204cowa</p></body></html>", nullptr));
        dmpcButton->setText(QCoreApplication::translate("MainWindow", "DMPC", nullptr));
        dppcButton->setText(QCoreApplication::translate("MainWindow", "DPPC", nullptr));
        dmpgButton->setText(QCoreApplication::translate("MainWindow", "DMPG", nullptr));
        unknowButton->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        startDrawing->setText(QCoreApplication::translate("MainWindow", "Draw/Rysuj", nullptr));
        clearCurve->setText(QCoreApplication::translate("MainWindow", "Clear/Wyczy\305\233\304\207", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Analiza pomiar\303\263w</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Pocz\304\205tek<br/>piku</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Koniec<br/>piku</p></body></html>", nullptr));
        label_8->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Analiza", nullptr));
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
