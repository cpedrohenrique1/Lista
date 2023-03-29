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
    try
    {
        if (ui->lineEdit_InputValor->text().isEmpty())
        {
            throw QString("Valor esta vazio - InserirInicio");
        }
        if (ui->lineEdit_InputValor->text().toFloat() != ui->lineEdit_InputValor->text().toInt())
        {
            throw QString("Numero tem que ser inteiro - InserirInicio");
        }
        QString caracteres = ui->lineEdit_InputValor->text();
        for (int i = 0; i < caracteres.size(); i++)
        {
            if (caracteres[i] < '0' || caracteres[i] > '9')
            {
                throw QString("So podem ser inseridos numeros inteiros - inserirInicio");
            }
        }
        lista.inserirInicio(ui->lineEdit_InputValor->text().toInt());
        ui->lineEdit_InputValor->clear();
        ui->saida->setText(lista.obterDadosLLSE());
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro ", erro);
    }
}

void MainWindow::on_pushButton_inserirFinal_clicked()
{
    try
    {
        if (ui->lineEdit_InputValor->text().isEmpty())
        {
            throw QString("Valor esta vazio - InserirFinal");
        }
        if (ui->lineEdit_InputValor->text().toFloat() != ui->lineEdit_InputValor->text().toInt())
        {
            throw QString("Numero tem que ser inteiro - InserirFinal");
        }
        QString caracteres = ui->lineEdit_InputValor->text();
        for (int i = 0; i < caracteres.size(); i++)
        {
            if (caracteres[i] < '0' || caracteres[i] > '9')
            {
                throw QString("So podem ser inseridos numeros inteiros - inserirInicio");
            }
        }
        lista.inserirFinal(ui->lineEdit_InputValor->text().toInt());
        ui->lineEdit_InputValor->clear();
        ui->saida->setText(lista.obterDadosLLSE());
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro ", erro);
    }
}

void MainWindow::on_pushButton_AcessarInicio_clicked()
{
    try
    {
        ui->lineEdit_InputValor->setText(QString::number(lista.acessarInicio()));
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro ", erro);
    }
}

void MainWindow::on_pushButton_acessarFinal_clicked()
{
    try
    {
        ui->lineEdit_InputValor->setText(QString::number(lista.acessarFinal()));
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro ", erro);
    }
}

void MainWindow::on_pushButton_RetirarInicio_clicked()
{
    try
    {
        ui->lineEdit_InputValor->setText(QString::number(lista.retirarInicio()));
        ui->saida->setText(lista.obterDadosLLSE());
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro ", erro);
    }
}

void MainWindow::on_pushButton_retirarFinal_clicked()
{
    try
    {
        ui->lineEdit_InputValor->setText(QString::number(lista.retirarFinal()));
        ui->saida->setText(lista.obterDadosLLSE());
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro ", erro);
    }
}
