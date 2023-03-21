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

void MainWindow::on_botaoTestar_clicked()
{
    try
    {
        srand(time(0));
        Pedro::LLSE lista;
        for (int i = 0; i < 5000; i++)
        {
            lista.inserirInicio(rand() % 101);
        }
        QString saida = "";
        for (int i = 0; i < 5001; i++)
        {
            saida += QString::number(lista.retirarInicio()) + "\t";
        }
        ui->saida->setText(saida);
    }
    catch (...)
    {
        QMessageBox::critical(this, "ERRO ", "erro de teste");
    }
}
