#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_botaoTestar_clicked()
{
    try {
        Pedro::LLSE lista;

    } catch (...) {
        QMessageBox::critical(this, "ERRO ", "erro de teste");
    }
}

