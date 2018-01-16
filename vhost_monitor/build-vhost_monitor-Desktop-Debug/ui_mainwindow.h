/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label_22;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QProgressBar *progressBar_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *label_23;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QProgressBar *progressBar_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLabel *label_24;
    QGridLayout *gridLayout_6;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_5;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_20;
    QLabel *label_21;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(466, 374);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_7->addWidget(label_19);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font1;
        font1.setPointSize(14);
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_10);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        progressBar->setFont(font2);
        progressBar->setStyleSheet(QString::fromUtf8(""));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_5->addWidget(label_2);

        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QFont font3;
        font3.setPointSize(12);
        label_22->setFont(font3);

        horizontalLayout_5->addWidget(label_22);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 2);


        horizontalLayout_6->addLayout(gridLayout);


        verticalLayout_7->addLayout(horizontalLayout_6);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_7->addWidget(label_16);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_5->addWidget(label_4);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(label_11);


        horizontalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        progressBar_2 = new QProgressBar(centralWidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setFont(font2);
        progressBar_2->setStyleSheet(QString::fromUtf8(""));
        progressBar_2->setValue(0);

        horizontalLayout_2->addWidget(progressBar_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_7->addWidget(label_7);

        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font3);

        horizontalLayout_7->addWidget(label_23);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);

        gridLayout_5->addWidget(pushButton_4, 1, 0, 1, 2);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_5->addWidget(lineEdit_2, 0, 1, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_5);


        verticalLayout_7->addLayout(horizontalLayout_8);

        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_7->addWidget(label_18);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(label_12);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        progressBar_3 = new QProgressBar(centralWidget);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setFont(font2);
        progressBar_3->setStyleSheet(QString::fromUtf8(""));
        progressBar_3->setValue(0);

        horizontalLayout_3->addWidget(progressBar_3);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_9->addWidget(label_9);

        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font3);

        horizontalLayout_9->addWidget(label_24);


        verticalLayout_6->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_6);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        gridLayout_6->addWidget(label_15, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_6->addWidget(lineEdit_3, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font1);

        gridLayout_6->addWidget(pushButton_5, 1, 0, 1, 2);


        horizontalLayout_10->addLayout(gridLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_10);

        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_7->addWidget(label_17);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout_4);

        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_7->addWidget(label_20);

        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_7->addWidget(label_21);

        MainWindow->setCentralWidget(centralWidget);
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        label_21->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VHOST_MONITOR", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "____________________________________________________________________________", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "iperf1", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "TX:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "RX:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "NON", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "IP:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "BIND", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "____________________________________________________________________________", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "iperf2", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "TX:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "RX:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "NON", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "IP:", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "BIND", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "____________________________________________________________________________", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "iperf3", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "TX:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "RX:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "NON", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "IP:", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "BIND", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "____________________________________________________________________________", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "START", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "PIN ALL vCPU TO CPU0", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "-----------------------------------------------------------------------------------------------------------", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Initialized", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
