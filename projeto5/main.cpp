#include "mainwindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QWidget janela(0);
    QGridLayout mainlay(0);//CRIA O GRID
    QLabel l("Digite",&janela);
    QLineEdit e(&janela);
    QPushButton p("OK",&janela);//TODOS FILHOS DA JANELA
    mainlay.addWidget(&l,0,0);//ADICIONA NO GRID O LABEL NA LINHA 0 E COLUNA 0
    mainlay.addWidget(&e,0,1);
    mainlay.addWidget(&p,1,1);
    janela.setLayout((&mainlay));//SETA NA JANELA O GRID
    janela.show();

    return a.exec();
}
