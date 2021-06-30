/********************************************************************************
** Form generated from reading UI file 'getinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETINFO_H
#define UI_GETINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetInfo
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QDialog *GetInfo)
    {
        if (GetInfo->objectName().isEmpty())
            GetInfo->setObjectName(QString::fromUtf8("GetInfo"));
        GetInfo->resize(400, 300);
        GetInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 201, 190);\n"
"QMessageBox {\n"
"background-color: white;\n"
"}\n"
""));
        lineEdit = new QLineEdit(GetInfo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 171, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));
        pushButton = new QPushButton(GetInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 40, 71, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(105, 83, 86);\n"
"	border: 1px solid rgb(251, 201, 190);\n"
"	background-color: rgb(236, 184, 101);\n"
"	border-radius: 5px;\n"
"	font: 8pt \"Segoe Print\";\n"
"}"));
        gridLayoutWidget = new QWidget(GetInfo);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 100, 381, 145));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_8, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_9, 2, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_10, 3, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_11, 4, 1, 1, 1);


        retranslateUi(GetInfo);

        QMetaObject::connectSlotsByName(GetInfo);
    } // setupUi

    void retranslateUi(QDialog *GetInfo)
    {
        GetInfo->setWindowTitle(QCoreApplication::translate("GetInfo", "Get info", nullptr));
        pushButton->setText(QCoreApplication::translate("GetInfo", "\320\243\320\267\320\275\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("GetInfo", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\275\320\270\320\263\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("GetInfo", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_5->setText(QCoreApplication::translate("GetInfo", "\320\223\320\276\320\264 \320\277\321\203\320\261\320\273\320\270\320\272\320\260\321\206\320\270\320\270", nullptr));
        label_6->setText(QCoreApplication::translate("GetInfo", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\277\320\270\320\271 \320\262 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("GetInfo", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GetInfo: public Ui_GetInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETINFO_H
