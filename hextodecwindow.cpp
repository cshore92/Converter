#include "hextodecwindow.h"
#include "ui_hextodecwindow.h"

hexToDecWindow::hexToDecWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hexToDecWindow)
{
    ui->setupUi(this);
}

hexToDecWindow::~hexToDecWindow()
{
    delete ui;
}
