#ifndef MYOBJECT2_H
#define MYOBJECT2_H

#include <QObject>

class myobject2 : public QObject
{
    Q_OBJECT
public:
    explicit myobject2(QObject *parent = 0);

signals:

public slots:
};

#endif // MYOBJECT2_H