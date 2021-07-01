#include "bintohexwindow.h"
#include "ui_bintohexwindow.h"

bintohexwindow::bintohexwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bintohexwindow)
{
    ui->setupUi(this);
}

bintohexwindow::~bintohexwindow()
{
    delete ui;
}
