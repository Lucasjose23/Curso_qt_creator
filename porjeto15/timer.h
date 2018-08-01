#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTimer>
#include <QTime>
#include <QDebug>

class timer : public QObject
{
    Q_OBJECT
public:
    explicit timer(QObject *parent = 0);

signals:

private slots:
    void showMessage();

private:
    QObject *obj;
    QTimer *time;

public slots:
};

#endif // TIMER_H
