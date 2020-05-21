/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_5;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 300, 112, 32));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 360, 451, 141));
        QFont font;
        font.setPointSize(48);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 30, 91, 41));
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(150, 40, 62, 22));
        doubleSpinBox->setMinimum(0.010000000000000);
        doubleSpinBox->setMaximum(0.990000000000000);
        doubleSpinBox->setSingleStep(0.010000000000000);
        doubleSpinBox->setValue(0.250000000000000);
        doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(400, 40, 62, 22));
        doubleSpinBox_2->setMinimum(0.010000000000000);
        doubleSpinBox_2->setMaximum(0.990000000000000);
        doubleSpinBox_2->setSingleStep(0.010000000000000);
        doubleSpinBox_2->setValue(0.750000000000000);
        doubleSpinBox_3 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(150, 110, 62, 22));
        doubleSpinBox_3->setMinimum(0.010000000000000);
        doubleSpinBox_3->setMaximum(0.990000000000000);
        doubleSpinBox_3->setSingleStep(0.010000000000000);
        doubleSpinBox_3->setValue(0.750000000000000);
        doubleSpinBox_4 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(400, 110, 62, 22));
        doubleSpinBox_4->setMinimum(0.010000000000000);
        doubleSpinBox_4->setMaximum(0.990000000000000);
        doubleSpinBox_4->setSingleStep(0.010000000000000);
        doubleSpinBox_4->setValue(0.250000000000000);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 30, 91, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 100, 91, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 100, 91, 41));
        doubleSpinBox_5 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(150, 190, 62, 22));
        doubleSpinBox_5->setMinimum(0.010000000000000);
        doubleSpinBox_5->setMaximum(1.000000000000000);
        doubleSpinBox_5->setSingleStep(0.010000000000000);
        doubleSpinBox_5->setValue(1.000000000000000);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(290, 240, 42, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(1000);
        spinBox->setValue(5);
        doubleSpinBox_6 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(400, 190, 62, 22));
        doubleSpinBox_6->setMinimum(0.010000000000000);
        doubleSpinBox_6->setMaximum(0.990000000000000);
        doubleSpinBox_6->setSingleStep(0.010000000000000);
        doubleSpinBox_6->setValue(0.100000000000000);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 180, 91, 41));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 180, 121, 41));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 230, 91, 41));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 400, 171, 41));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter k1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter k2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter k3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter k4", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter pE", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Enter target width", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Enter t0", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Sample size Estimate: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
