#include "timer.h"

timer::timer(QObject *parent) : QObject(parent)
{
    time=new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(showMessage()));
    time->start(1000);


}

void timer::showMessage()
{
    system("cls");
    qDebug()<<"Horario: "<<QTime::currentTime().toString();

}
