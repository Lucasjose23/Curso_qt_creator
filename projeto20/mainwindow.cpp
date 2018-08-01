#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    icon=new QSystemTrayIcon(QIcon(QPixmap(":/hqdefault.jpg")),this);
    icon->
    icon->show();
    icon->showMessage("bosta","o icone ta na bandeija",  QSystemTrayIcon::Information,3000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
