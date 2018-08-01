#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), ui->textEdit, SLOT(clear()));//quando clicado no botao apaga
}

MainWindow::~MainWindow()
{
    delete ui;
}
