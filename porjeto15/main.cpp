#include <QCoreApplication>
#include  "timer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    timer obj;
    //singleshot chama uma vez


    return a.exec();
}
