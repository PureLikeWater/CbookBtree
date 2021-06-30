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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWrite_a_new_book;
    QAction *actionGet_information_about_book;
    QAction *actionShow_all_books;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menumenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 201, 190);"));
        actionWrite_a_new_book = new QAction(MainWindow);
        actionWrite_a_new_book->setObjectName(QString::fromUtf8("actionWrite_a_new_book"));
        actionGet_information_about_book = new QAction(MainWindow);
        actionGet_information_about_book->setObjectName(QString::fromUtf8("actionGet_information_about_book"));
        actionShow_all_books = new QAction(MainWindow);
        actionShow_all_books->setObjectName(QString::fromUtf8("actionShow_all_books"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 0, 341, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 32px \"Segoe Print\";\n"
"	font-size: 32px;\n"
"	color: rgb(105, 83, 86);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 100, 101, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(105, 83, 86);\n"
"	border: 1px solid rgb(251, 201, 190);\n"
"	background-color: rgb(236, 184, 101);\n"
"	border-radius: 5px;\n"
"	font: 8pt \"Segoe Print\";\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 170, 111, 25));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(105, 83, 86);\n"
"	border: 1px solid rgb(251, 201, 190);\n"
"	background-color: rgb(236, 184, 101);\n"
"	border-radius: 5px;\n"
"	font: 8pt \"Segoe Print\";\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(310, 70, 161, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 140, 161, 24));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(260, 340, 301, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	margin: 0 5px 0 5px;\n"
"	color: rgb(105, 83, 86);\n"
"	font: 8pt \"Segoe Print\";\n"
"}"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	margin: 0 5px 0 5px;\n"
"	color: rgb(105, 83, 86);\n"
"	font: 8pt \"Segoe Print\";\n"
"}\n"
""));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(105, 83, 86);\n"
"font: 8pt \"Segoe Print\";"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(105, 83, 86);\n"
"font: 8pt \"Segoe Print\";"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 210, 210, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 8pt \"Segoe Print\";\n"
"	color: rgb(105, 83, 86);\n"
"}"));

        verticalLayout->addWidget(label_8);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"height: 22px;\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(219, 123, 101);\n"
"border: 1px solid  rgb(219, 123, 101);\n"
"border-radius: 7px;\n"
"color: rgb(37, 95, 99);\n"
"height: 22px;\n"
"font: 8pt \"Yu Gothic\";\n"
"}"));

        verticalLayout->addWidget(lineEdit_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(105, 83, 86);\n"
"	border: 1px solid rgb(251, 201, 190);\n"
"	background-color: rgb(236, 184, 101);\n"
"	border-radius: 5px;\n"
"	width: 111px;\n"
"	height: 23px;\n"
"	font: 8pt \"Segoe Print\";\n"
"}"));

        gridLayout_2->addWidget(pushButton_9, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menubar->setStyleSheet(QString::fromUtf8("color: rgb(105, 83, 86);"));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName(QString::fromUtf8("menumenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menumenu->addAction(actionWrite_a_new_book);
        menumenu->addAction(actionGet_information_about_book);
        menumenu->addAction(actionShow_all_books);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "eLibrary", nullptr));
        actionWrite_a_new_book->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\272\320\275\320\270\320\263\321\203", nullptr));
        actionGet_information_about_book->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\272\320\275\320\270\320\263\320\265", nullptr));
        actionShow_all_books->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\320\265 \320\272\320\275\320\270\320\263\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\267\321\217\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\277\320\270\320\271 \321\203 \321\207\320\270\321\202\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\277\320\270\320\271 \320\262 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\272\320\275\320\270\320\263 \320\277\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260\320\274", nullptr));
        lineEdit_3->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\260\320\262\320\275\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\320\270", nullptr));
        menumenu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
