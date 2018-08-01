#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(this, SIGNAL(rejected()),qApp, SLOT(quit()));//nao sei pesquisar
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString serialkey("abacate");
    QString user= ui->lineEdit->text();
    if(serialkey!=user)
        QMessageBox::about(this,"Errou","<font color=red>Chave incorreta");
    else
    {
       QMessageBox::about(this,"Parabens","<font color=blue>Chave correta");
       accept();
    }
}
