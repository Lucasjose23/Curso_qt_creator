#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql>

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
    void setUptable();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QMap<QString , QString> state_UFS;
};

#endif // MAINWINDOW_H
