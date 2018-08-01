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
    QString nome= QFileDialog::getOpenFileName(this,"Abrir arquivo",QDir::currentPath(),"Arquivo de texto (*.txt)");
    if(nome.isEmpty())
    {
        QFile file(nome);
        if(file.open(QIODevice::ReadOnly,QIODevice::Text))
        {
            QTextStream stream(&file);
            ui->textEdit->setText(stream.readAll());

        }
    }
}
