/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *resultLabel;
    QPushButton *clearButton;
    QPushButton *divButton;
    QPushButton *mulButton;
    QPushButton *addButton;
    QPushButton *subButton;
    QLineEdit *input1LineEdit;
    QLineEdit *input2LineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(241, 301);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(0, 0, 241, 61));
        QFont font;
        font.setPointSize(19);
        resultLabel->setFont(font);
        resultLabel->setStyleSheet(QString::fromUtf8("Qlabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight' ;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color: white;"));
        resultLabel->setTextFormat(Qt::TextFormat::AutoText);
        resultLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        resultLabel->setMargin(4);
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(0, 60, 241, 61));
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(155, 155, 155);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1\n"
"									stop: 0 #BEBEBE, stop: 1 #070707);\n"
"}"));
        divButton = new QPushButton(centralwidget);
        divButton->setObjectName("divButton");
        divButton->setGeometry(QRect(0, 240, 61, 61));
        divButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 125, 255);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        mulButton = new QPushButton(centralwidget);
        mulButton->setObjectName("mulButton");
        mulButton->setGeometry(QRect(60, 240, 61, 61));
        mulButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 125, 255);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(180, 240, 61, 61));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 125, 255);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        subButton = new QPushButton(centralwidget);
        subButton->setObjectName("subButton");
        subButton->setGeometry(QRect(120, 240, 61, 61));
        subButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(0, 125, 255);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        input1LineEdit = new QLineEdit(centralwidget);
        input1LineEdit->setObjectName("input1LineEdit");
        input1LineEdit->setGeometry(QRect(0, 120, 241, 61));
        input1LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid gray;\n"
"	\n"
"	\n"
"	\n"
"	background-color: rgb(76, 76, 193);\n"
"}\n"
"\n"
"\n"
""));
        input1LineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        input2LineEdit = new QLineEdit(centralwidget);
        input2LineEdit->setObjectName("input2LineEdit");
        input2LineEdit->setGeometry(QRect(0, 180, 241, 61));
        input2LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid gray;\n"
"	\n"
"	\n"
"	\n"
"	background-color: rgb(76, 76, 193);\n"
"}\n"
"\n"
"\n"
""));
        input2LineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        input1LineEdit->setText(QCoreApplication::translate("MainWindow", "Input 1", nullptr));
        input2LineEdit->setText(QCoreApplication::translate("MainWindow", "Input 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
