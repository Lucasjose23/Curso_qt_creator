#include <QCoreApplication>
#include "myobject2.h"
void test()
{
    QObject obj;
    myobject2 *obj=new myobject2(&obj)

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
