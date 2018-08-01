#include <QCoreApplication>
#include <QtSql>
#include<QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlDatabase db;
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
    QSqlQuery q("SELECT * FROM Fazenda");
    if(q.exec())
    {
        while(q.next())
        {
            qDebug()<<q.value(1).toString();
        }

    }
    return a.exec();
}
