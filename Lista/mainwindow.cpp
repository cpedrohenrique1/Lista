#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_InserirInicio_clicked()
{
    try{
        lista.inserirInicio(ui->lineEdit_InputValor->text().toInt());
        //InserirFunção para mostrar a lista aqui;;;
        ui->saida->setText(lista.obterDadosLLSE());
    }catch(QString &erro){
        QMessageBox::critical(this, "Erro ", erro);
    }
}


void MainWindow::on_pushButton_AcessarInicio_clicked()
{
    try {
        ui->saida->setText(QString::number(lista.acessarInicio()));

    } catch(QString &erro){
        QMessageBox::critical(this, "Erro ", erro);
    }
}


void MainWindow::on_pushButton_RetirarInicio_clicked()
{
    try {
        lista.retirarInicio();
        ui->saida->setText(lista.obterDadosLLSE());

    } catch(QString &erro){
        QMessageBox::critical(this, "Erro ", erro);
    }
}

