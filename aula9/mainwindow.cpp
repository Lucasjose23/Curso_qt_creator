#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog=new Dialog(this);//chamou seu construtor e dis que ele e desse widget
    dialog->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    bool ok;
    double peso=QInputDialog::getDouble(this,"Inserir peso","insira o peso do cliente",50,20,200,2,&ok);
    if(ok)
        ui->lineEdit->setText(QString("%1").arg(peso));
    //QStringList//lista de string
}
