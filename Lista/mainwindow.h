#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <llse.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_InserirInicio_clicked();

    void on_pushButton_AcessarInicio_clicked();

    void on_pushButton_RetirarInicio_clicked();

    void on_pushButton_inserirFinal_clicked();

    void on_pushButton_acessarFinal_clicked();

    void on_pushButton_retirarFinal_clicked();

    void on_pushButton_retirarPosicao_clicked();

    void on_pushButton_acessarPosicao_clicked();

    void on_pushButton_inserirPosicao_clicked();

private:
    Ui::MainWindow *ui;
    Pedro::LLSE lista;
};
#endif // MAINWINDOW_H
