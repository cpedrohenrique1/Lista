/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_InserirInicio;
    QPushButton *pushButton_inserirFinal;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QPushButton *pushButton_AcessarInicio;
    QPushButton *pushButton_acessarFinal;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QPushButton *pushButton_RetirarInicio;
    QPushButton *pushButton_retirarFinal;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_InputValor;
    QLabel *label_5;
    QTextEdit *saida;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(655, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        pushButton_InserirInicio = new QPushButton(centralwidget);
        pushButton_InserirInicio->setObjectName("pushButton_InserirInicio");

        verticalLayout_2->addWidget(pushButton_InserirInicio);

        pushButton_inserirFinal = new QPushButton(centralwidget);
        pushButton_inserirFinal->setObjectName("pushButton_inserirFinal");

        verticalLayout_2->addWidget(pushButton_inserirFinal);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_4->addWidget(label_3);

        pushButton_AcessarInicio = new QPushButton(centralwidget);
        pushButton_AcessarInicio->setObjectName("pushButton_AcessarInicio");

        verticalLayout_4->addWidget(pushButton_AcessarInicio);

        pushButton_acessarFinal = new QPushButton(centralwidget);
        pushButton_acessarFinal->setObjectName("pushButton_acessarFinal");

        verticalLayout_4->addWidget(pushButton_acessarFinal);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        pushButton_RetirarInicio = new QPushButton(centralwidget);
        pushButton_RetirarInicio->setObjectName("pushButton_RetirarInicio");

        verticalLayout_3->addWidget(pushButton_RetirarInicio);

        pushButton_retirarFinal = new QPushButton(centralwidget);
        pushButton_retirarFinal->setObjectName("pushButton_retirarFinal");

        verticalLayout_3->addWidget(pushButton_retirarFinal);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_InputValor = new QLineEdit(centralwidget);
        lineEdit_InputValor->setObjectName("lineEdit_InputValor");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_InputValor->sizePolicy().hasHeightForWidth());
        lineEdit_InputValor->setSizePolicy(sizePolicy);
        lineEdit_InputValor->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(lineEdit_InputValor);


        verticalLayout->addLayout(horizontalLayout);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        saida = new QTextEdit(centralwidget);
        saida->setObjectName("saida");

        verticalLayout->addWidget(saida);


        verticalLayout_5->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 655, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LLSE - Teste", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Inserir</span></p></body></html>", nullptr));
        pushButton_InserirInicio->setText(QCoreApplication::translate("MainWindow", "Inserir Inicio", nullptr));
        pushButton_inserirFinal->setText(QCoreApplication::translate("MainWindow", "Inserir Final", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Acessar</span></p></body></html>", nullptr));
        pushButton_AcessarInicio->setText(QCoreApplication::translate("MainWindow", "Acessar Inicio", nullptr));
        pushButton_acessarFinal->setText(QCoreApplication::translate("MainWindow", "Acessar Final", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Retirar</span></p></body></html>", nullptr));
        pushButton_RetirarInicio->setText(QCoreApplication::translate("MainWindow", "Retirar Inicio", nullptr));
        pushButton_retirarFinal->setText(QCoreApplication::translate("MainWindow", "Retirar Final", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Valor:</span></p></body></html>", nullptr));
        lineEdit_InputValor->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Dados da lista</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
