#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql>
#include<QtCore>
#include<QDebug>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setupStates();
    void updatetable(QString Nomefazenda);

private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_listWidget_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QMap<QString , QString> state_UFS;
     QMap<QString , QString> state_UFS2;

};

#endif // MAINWINDOW_H
