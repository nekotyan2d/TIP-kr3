/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_number_1;
    QLineEdit *lineEdit_value_1;
    QLabel *label_number_2;
    QLineEdit *lineEdit_value_2;
    QLabel *label_result_text;
    QLabel *label_result_value;
    QLabel *label;
    QRadioButton *radio_grad;
    QRadioButton *radio_rad;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_mul;
    QPushButton *button_sum;
    QPushButton *button_div;
    QPushButton *button_sub;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *button_cos;
    QPushButton *button_sin;
    QPushButton *button_tan;
    QPushButton *button_cotan;
    QPushButton *button_arcsin;
    QPushButton *button_arccos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(220, 140, 201, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_number_1 = new QLabel(formLayoutWidget);
        label_number_1->setObjectName("label_number_1");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_number_1);

        lineEdit_value_1 = new QLineEdit(formLayoutWidget);
        lineEdit_value_1->setObjectName("lineEdit_value_1");
        lineEdit_value_1->setEchoMode(QLineEdit::EchoMode::Normal);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_value_1);

        label_number_2 = new QLabel(formLayoutWidget);
        label_number_2->setObjectName("label_number_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_number_2);

        lineEdit_value_2 = new QLineEdit(formLayoutWidget);
        lineEdit_value_2->setObjectName("lineEdit_value_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_value_2);

        label_result_text = new QLabel(centralwidget);
        label_result_text->setObjectName("label_result_text");
        label_result_text->setGeometry(QRect(220, 300, 101, 20));
        label_result_value = new QLabel(centralwidget);
        label_result_value->setObjectName("label_result_value");
        label_result_value->setGeometry(QRect(310, 300, 121, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 130, 111, 21));
        radio_grad = new QRadioButton(centralwidget);
        radio_grad->setObjectName("radio_grad");
        radio_grad->setGeometry(QRect(480, 160, 112, 26));
        radio_rad = new QRadioButton(centralwidget);
        radio_rad->setObjectName("radio_rad");
        radio_rad->setGeometry(QRect(600, 160, 112, 26));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(220, 210, 201, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_mul = new QPushButton(gridLayoutWidget);
        button_mul->setObjectName("button_mul");

        gridLayout->addWidget(button_mul, 1, 0, 1, 1);

        button_sum = new QPushButton(gridLayoutWidget);
        button_sum->setObjectName("button_sum");

        gridLayout->addWidget(button_sum, 0, 0, 1, 1);

        button_div = new QPushButton(gridLayoutWidget);
        button_div->setObjectName("button_div");

        gridLayout->addWidget(button_div, 1, 1, 1, 1);

        button_sub = new QPushButton(gridLayoutWidget);
        button_sub->setObjectName("button_sub");

        gridLayout->addWidget(button_sub, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(480, 200, 169, 103));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        button_cos = new QPushButton(gridLayoutWidget_2);
        button_cos->setObjectName("button_cos");

        gridLayout_2->addWidget(button_cos, 0, 1, 1, 1);

        button_sin = new QPushButton(gridLayoutWidget_2);
        button_sin->setObjectName("button_sin");

        gridLayout_2->addWidget(button_sin, 0, 0, 1, 1);

        button_tan = new QPushButton(gridLayoutWidget_2);
        button_tan->setObjectName("button_tan");

        gridLayout_2->addWidget(button_tan, 1, 0, 1, 1);

        button_cotan = new QPushButton(gridLayoutWidget_2);
        button_cotan->setObjectName("button_cotan");

        gridLayout_2->addWidget(button_cotan, 1, 1, 1, 1);

        button_arcsin = new QPushButton(gridLayoutWidget_2);
        button_arcsin->setObjectName("button_arcsin");

        gridLayout_2->addWidget(button_arcsin, 2, 0, 1, 1);

        button_arccos = new QPushButton(gridLayoutWidget_2);
        button_arccos->setObjectName("button_arccos");

        gridLayout_2->addWidget(button_arccos, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_number_1->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 1:", nullptr));
        label_number_2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 2:", nullptr));
        label_result_text->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label_result_value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \320\262:", nullptr));
        radio_grad->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\264\321\203\321\201\321\213", nullptr));
        radio_rad->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\320\260\320\275\321\213", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        button_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow", "tg", nullptr));
        button_cotan->setText(QCoreApplication::translate("MainWindow", "ctg", nullptr));
        button_arcsin->setText(QCoreApplication::translate("MainWindow", "arcsin", nullptr));
        button_arccos->setText(QCoreApplication::translate("MainWindow", "arccos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
