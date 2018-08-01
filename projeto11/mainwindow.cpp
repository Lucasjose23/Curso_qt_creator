#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    file=new  QFile("teste.txt");//aloco o ponteiro para arquivo
    if(file->open(QIODevice::ReadWrite| QIODevice::Append | QIODevice::Text ))
    {
        stream.setDevice(file);//buff para o arquivo
    }
    else
    {
        qDebug("Impossivel");
        qApp->exit(-1);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString buffer= ui->textEdit_2->toPlainText();//recebe oq esta na caixa de texto
    if(buffer.isEmpty())//nao vasio
    {
        stream <<buffer <<endl;
    }
}

void MainWindow::on_pushButton_clicked()
{
    stream.seek(0);
    ui->textEdit->setText(stream.readAll());
}
