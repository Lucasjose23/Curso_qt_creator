#include <QCoreApplication>
#include<QFile>
#include<iostream>

void write(const QString &arq)
{
    QFile file(arq);//abre o arquivo
    if(file.open(QIODevice::WriteOnly|QIODevice::Text))//passa os tipos de abertura ..para escrita de texto
    {
        file.write("hello");
    }
    else
        std::cout <<qPrintable(file.errorString());
}
void read(const QString &arq)
{ QFile file(arq);//abre o arquivo
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QString buffer=file.readAll();
         std::cout <<qPrintable(buffer);
    }
    else
        std::cout <<qPrintable(file.errorString());
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString arq("C:/Users/Lucas/Desktop/nba.txt");
    write(arq);
    read(arq);

    return a.exec();
}
