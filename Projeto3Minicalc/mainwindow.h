#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

private slots:
    void on_bntsoma_clicked();

    void on_bntsub_clicked();

    void on_bntmul_clicked();

    void on_bntdiv_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
