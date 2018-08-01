#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db= QSqlDatabase::addDatabase("QODBC3");//driver de conecçao

    db.setDatabaseName("DRIVER={SQL Server};Server=LAPTOP-E1K6U59U\\SQLEXPRESS;Database=Trabalho;Uid=sa;Port=1433;Pwd=123;WSID=.");

    if(db.open())
    {
        qDebug() <<"SUCESSO!";

    }
    else
    {
        qDebug() <<db.lastError().text();
        qApp->quit();
    }
    setupStates();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupStates()
{
    QSqlQuery query;//cria a consulta
    query.exec("SELECT nome FROM Fazenda");//executa a consulta sql
    while (query.next())//anda sobre o resultado
    {
       state_UFS[query.value(0).toString()];//guardando nesta variavel do tipo qmap

    }
    ui->listWidget->addItems(state_UFS.keys());//adiciona os valores na lista





}

void MainWindow::updatetable(QString Nomefazenda)
{
    QSqlQuery query;//cria a consulta
    query.exec("SELECT Servico.CodigoTrabalho, Servico.Cpf FROM Fazenda INNER JOIN Servico ON Fazenda.Cnpj = Servico.CnpjFazenda WHERE Fazenda.Nome="+Nomefazenda);
    while (query.next())//anda sobre o resultado
    {
       state_UFS2[query.value(0).toString()];

    }
    ui->listWidget_2->addItems( state_UFS2.keys());



}

void MainWindow::on_tableWidget_clicked(const QModelIndex &index)
{

}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    updatetable(index.data().toString());
}
