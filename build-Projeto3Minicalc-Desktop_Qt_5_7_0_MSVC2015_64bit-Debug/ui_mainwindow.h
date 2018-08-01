/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *bntdiv;
    QPushButton *bntsoma;
    QPushButton *bntsub;
    QPushButton *bntmul;
    QLineEdit *lineEdit_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 70, 113, 20));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 70, 113, 20));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 141, 91, 112));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bntdiv = new QPushButton(gridLayoutWidget);
        bntdiv->setObjectName(QStringLiteral("bntdiv"));

        gridLayout->addWidget(bntdiv, 3, 0, 1, 1);

        bntsoma = new QPushButton(gridLayoutWidget);
        bntsoma->setObjectName(QStringLiteral("bntsoma"));

        gridLayout->addWidget(bntsoma, 0, 0, 1, 1);

        bntsub = new QPushButton(gridLayoutWidget);
        bntsub->setObjectName(QStringLiteral("bntsub"));

        gridLayout->addWidget(bntsub, 1, 0, 1, 1);

        bntmul = new QPushButton(gridLayoutWidget);
        bntmul->setObjectName(QStringLiteral("bntmul"));

        gridLayout->addWidget(bntmul, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 140, 61, 71));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        bntdiv->setText(QApplication::translate("MainWindow", "/", 0));
        bntsoma->setText(QApplication::translate("MainWindow", "+", 0));
        bntsub->setText(QApplication::translate("MainWindow", "-", 0));
        bntmul->setText(QApplication::translate("MainWindow", "*", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
