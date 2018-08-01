#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db= QSqlDatabase::addDatabase("QODBC3");//driver de conecçao

    db.setDatabaseName("DRIVER={SQL Server};Server=LAPTOP-E1K6U59U\\SQLEXPRESS;Database=IMC;Uid=sa;Port=1433;Pwd=123;WSID=.");

    if(db.open())
    {
        qDebug() <<"SUCESSO!";

    }
    else
    {
        qDebug() <<db.lastError().text();
        qApp->quit();
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUptable()
{

}



void MainWindow::on_pushButton_clicked()
{

        QString nome=ui->lineEdit->text();
        QString descri="";
        double metros=ui->lineEdit_3->text().toDouble();
        double centimetros=ui->lineEdit_4->text().toDouble();
        double quilos=ui->lineEdit_2->text().toDouble();
        if(nome!= "" && metros>0 && centimetros>0 && quilos>0)
        {
            double altura=((metros*100)+centimetros)/100;
            double imc=quilos/(altura*altura);
            QString s=QString::number(imc);
            ui->label_5->setText("IMC:"+s);

            if(imc<20)
            {
                ui->label_6->setText("Abaixo do peso");
                descri=ui->label_6->text();
            }
            else if(imc>=20 && imc<25)
            {
                 ui->label_6->setText("Peso ideal");
                descri=ui->label_6->text();
            }
            else
            {
                 ui->label_6->setText("obesidade");
                descri=ui->label_6->text();
            }
            QSqlQuery query;//cria a consulta
            query.prepare("INSERT INTO Pessoa1 VALUES('"+nome+"',"+QString::number(imc)+",'"+descri+"')");
            query.exec();
        }
        else
        {
            ui->label_5->setText("");
            ui->label_6->setText("Preencha corretamente");
        }




}

void MainWindow::on_pushButton_2_clicked()
{
    // seta o objeto modelo
    QSqlTableModel *model = new QSqlTableModel(this, db);

    // seta a tabela
    model->setTable("Pessoa1");
    ui->tableView->setModel(model);

    // seleciona os dados da tabela
    model->select();
}
