#include "mainwindow.h"
#include <QApplication>
#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wid;//cria o wiget
    QVBoxLayout lamain(&wid);//organiza com um layot vertical horizontal e QHBOX
    QLabel l("Hello",&wid);//cria um label passando o wid por referencia
    QPushButton p(&wid);
    p.setText("sair");
    lamain.addWidget(&l,5);//adiciona no layout o label
    lamain.addWidget(&p,5);
    //comando para sair
    QObject::connect(&p,SIGNAL(clicked(bool)),qApp,SLOT(quit()));
    wid.show();//chama a tela


    return a.exec();
}
