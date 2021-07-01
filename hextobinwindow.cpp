#include "hextobinwindow.h"
#include "ui_hextobinwindow.h"

hextobinwindow::hextobinwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hextobinwindow)
{
    ui->setupUi(this);
}

hextobinwindow::~hextobinwindow()
{
    delete ui;
}
