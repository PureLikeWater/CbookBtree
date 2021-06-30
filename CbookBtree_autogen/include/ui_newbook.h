/********************************************************************************
** Form generated from reading UI file 'newbook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWBOOK_H
#define UI_NEWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewBook
{
public:
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *NewBook)
    {
        if (NewBook->objectName().isEmpty())
            NewBook->setObjectName(QString::fromUtf8("NewBook"));
        NewBook->resize(400, 300);
        NewBook->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 201, 190);"));
        pushButton = new QPushButton(NewBook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 220, 80, 25));
        pushButton->setToolTipDuration(5);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(105, 83, 86);\n"
"	border: 1px solid rgb(251, 201, 190);\n"
"	background-color: rgb(236, 184, 101);\n"
"	border-radius: 5px;\n"
"	font: 8pt \"Segoe Print\";\n"
"}"));
        gridLayoutWidget = new QWidget(NewBook);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 381, 150));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);


        retranslateUi(NewBook);

        QMetaObject::connectSlotsByName(NewBook);
    } // setupUi

    void retranslateUi(QDialog *NewBook)
    {
        NewBook->setWindowTitle(QCoreApplication::translate("NewBook", "NewBook", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        pushButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("NewBook", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("NewBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\275\320\270\320\263\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("NewBook", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\277\320\270\320\271 \320\262 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("NewBook", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        label_4->setText(QCoreApplication::translate("NewBook", "\320\223\320\276\320\264 \320\277\321\203\320\261\320\273\320\270\320\272\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("NewBook", "\320\220\320\262\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewBook: public Ui_NewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWBOOK_H
