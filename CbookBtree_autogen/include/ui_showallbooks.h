/********************************************************************************
** Form generated from reading UI file 'showallbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLBOOKS_H
#define UI_SHOWALLBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllBooks
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *ShowAllBooks)
    {
        if (ShowAllBooks->objectName().isEmpty())
            ShowAllBooks->setObjectName(QString::fromUtf8("ShowAllBooks"));
        ShowAllBooks->resize(850, 650);
        ShowAllBooks->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 201, 190);"));
        tableWidget = new QTableWidget(ShowAllBooks);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 831, 631));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"font: 8pt \"Segoe Print\";\n"
"color: rgb(105, 83, 86);\n"
"}\n"
"QHeaderView::section {\n"
"background-color: rgb(251, 201, 190);\n"
"border: 1px solid rgb(251, 201, 190);\n"
"font: 10px \"Segoe Print\";\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section {\n"
"    background-color: rgb(251, 201, 190);\n"
"    border: 1px solid rgb(251, 201, 190);\n"
"}"));

        retranslateUi(ShowAllBooks);

        QMetaObject::connectSlotsByName(ShowAllBooks);
    } // setupUi

    void retranslateUi(QDialog *ShowAllBooks)
    {
        ShowAllBooks->setWindowTitle(QCoreApplication::translate("ShowAllBooks", "Show all books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowAllBooks: public Ui_ShowAllBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLBOOKS_H
