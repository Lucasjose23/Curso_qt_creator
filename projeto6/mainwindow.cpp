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

void MainWindow::on_pushButton_clicked()
{
//    box=new QMessageBox(this);//passa o nosso widget
//    box->setText("clico");//texto
//    box->setIcon(QMessageBox::Information);//passa o icone
//    box->exec();
//    delete box;
//    QMessageBox::about(this,"oi","oi");//mostra uma msg simples tirulo e texto
      int resp=QMessageBox::warning(this,"alerta","fechar?",QMessageBox::Ok,QMessageBox::Cancel);//cria uma confirmaçao de ok que retorna 1 se clicado ou 0se nao
      if(resp==QMessageBox::Ok)
          qApp->quit();
      int resp2=QMessageBox::critical(this,"gay","morreu","1","2");

}
