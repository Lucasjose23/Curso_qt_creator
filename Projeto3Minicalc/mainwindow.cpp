#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bntsoma_clicked()
{
    double resultado=ui->lineEdit->text().toDouble()+ui->lineEdit_2->text().toDouble();
    ui->lineEdit_3->setText(QString("%1").arg(resultado));
}

void MainWindow::on_bntsub_clicked()
{
    double resultado=ui->lineEdit->text().toDouble()-ui->lineEdit_2->text().toDouble();
    ui->lineEdit_3->setText(QString("%1").arg(resultado));
}

void MainWindow::on_bntmul_clicked()
{
    double resultado=ui->lineEdit->text().toDouble()*ui->lineEdit_2->text().toDouble();
    ui->lineEdit_3->setText(QString("%1").arg(resultado));
}

void MainWindow::on_bntdiv_clicked()
{
    if(ui->lineEdit_2->text().toDouble()!=0)
    {

        double resultado=ui->lineEdit->text().toDouble()/ui->lineEdit_2->text().toDouble();
        ui->lineEdit_3->setText(QString("%1").arg(resultado));
    }
    else
        ui->lineEdit_3->setText("Nao pode");


}
