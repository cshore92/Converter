#include "bintodecwindow.h"
#include "ui_bintodecwindow.h"

binToDecWindow::binToDecWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::binToDecWindow)
{
    ui->setupUi(this);
}

binToDecWindow::~binToDecWindow()
{
    delete ui;
}
