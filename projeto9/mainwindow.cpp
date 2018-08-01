#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setPixmap(QBitmap(":/OneDrive/Imagens/1619547_608301092588208_976792154_n.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
