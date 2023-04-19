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
        QString caracter = ui->lineEdit_InputValor->text();
        for (int i = 0; i < caracter.size(); i++)
        {
            if ((caracter[i] < '0' || caracter[i] > '9') && caracter[i] != '-')
            {
                throw QString("So podem ser inseridos numeros inteiros - inserirInicio");
            }
        }
        lista.inserirInicio(ui->lineEdit_InputValor->text().toInt());
        ui->lineEdit_InputValor->clear();
        ui->saida->setText(lista.obterDadosLLSE());
        ui->lineEdit_OutputElementos->setText(QString::number(lista.getQuantidadeElementos()));
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
        QString caracter = ui->lineEdit_InputValor->text();
        for (int i = 0; i < caracter.size(); i++)
        {
            if ((caracter[i] < '0' || caracter[i] > '9') && caracter[i] != '-')
            {
                throw QString("So podem ser inseridos numeros inteiros - inserirFinal");
            }
        }
        lista.inserirFinal(ui->lineEdit_InputValor->text().toInt());
        ui->lineEdit_InputValor->clear();
        ui->saida->setText(lista.obterDadosLLSE());
        ui->lineEdit_OutputElementos->setText(QString::number(lista.getQuantidadeElementos()));
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
        ui->lineEdit_OutputElementos->setText(QString::number(lista.getQuantidadeElementos()));
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
        ui->lineEdit_OutputElementos->setText(QString::number(lista.getQuantidadeElementos()));
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro ", erro);
    }
}

void MainWindow::on_pushButton_retirarPosicao_clicked()
{
    try {
        ui->lineEdit_InputValor->setText(QString::number(lista.retirarPosicao(ui->lineEdit_posicao->text().toInt())));
        ui->saida->setText(lista.obterDadosLLSE());
        ui->lineEdit_OutputElementos->setText(QString::number(lista.getQuantidadeElementos()));

    } catch (QString &erro) {
        QMessageBox::critical(this, "Erro ", erro);
    }
}


void MainWindow::on_pushButton_acessarPosicao_clicked()
{
    try {
        ui->lineEdit_InputValor->setText(QString::number(lista.acessarPosicao(ui->lineEdit_posicao->text().toInt())));
    } catch (QString &erro) {
        QMessageBox::critical(this, "Erro ", erro);
    }
}


void MainWindow::on_pushButton_inserirPosicao_clicked()
{
    try {
        if (ui->lineEdit_InputValor->text().isEmpty())
        {
            throw QString("Valor esta vazio - inserirPosicao");
        }
        if (ui->lineEdit_InputValor->text().toFloat() != ui->lineEdit_InputValor->text().toInt())
        {
            throw QString("Numero tem que ser inteiro - inserirPosicao");
        }
        QString caracter = ui->lineEdit_InputValor->text();
        for (int i = 0; i < caracter.size(); i++)
        {
            if ((caracter[i] < '0' || caracter[i] > '9') && caracter[i] != '-')
            {
                throw QString("So podem ser inseridos numeros inteiros - inserirPosicao");
            }
        }
        lista.inserirPosicao(ui->lineEdit_posicao->text().toInt(), ui->lineEdit_InputValor->text().toInt());
        ui->lineEdit_InputValor->clear();
        ui->lineEdit_posicao->clear();
        ui->saida->setText(lista.obterDadosLLSE());
        ui->lineEdit_OutputElementos->setText(QString::number(lista.getQuantidadeElementos()));
    } catch (QString &erro) {
        QMessageBox::critical(this, "Erro ", erro);
    }
}


void MainWindow::on_pushButton_inserirOrdenado_clicked()
{
    try {
        if (ui->lineEdit_InputValor->text().isEmpty())
        {
            throw QString("Valor esta vazio - inserirPosicao");
        }
        if (ui->lineEdit_InputValor->text().toFloat() != ui->lineEdit_InputValor->text().toInt())
        {
            throw QString("Numero tem que ser inteiro - inserirPosicao");
        }
        QString caracter = ui->lineEdit_InputValor->text();
        for (int i = 0; i < caracter.size(); i++)
        {
            if ((caracter[i] < '0' || caracter[i] > '9') && caracter[i] != '-')
            {
                throw QString("So podem ser inseridos numeros inteiros - inserirPosicao");
            }
        }
        lista.inserirOrdenado(ui->lineEdit_InputValor->text().toInt());
        ui->lineEdit_InputValor->clear();
        ui->saida->setText(lista.obterDadosLLSE());
        ui->lineEdit_OutputElementos->setText(QString::number(lista.getQuantidadeElementos()));
    } catch (QString &erro) {
        QMessageBox::critical(this, "Erro ", erro);
    }
}

