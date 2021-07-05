// @file mainwindow.cpp
// @author Cameron Shore
// @date 25-June-2021
// holds definitions of app fuctions

#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // GitHub Icon
    QPixmap pix(":/img/GitHub-Mark-Light-32px.png");
    int ghWidth = ui->gitHubIcon->width();
    int ghHeight = ui->gitHubIcon->height();
    ui->gitHubIcon->setPixmap(pix.scaled(ghWidth, ghHeight,Qt::KeepAspectRatio));

    // GitHub Hyperlink
    ui->GitHub->setText("<a href=\"https://github.com/cshore92/Converter/\"> GitHub</a>");
    ui->GitHub->setTextFormat(Qt::RichText);
    ui->GitHub->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->GitHub->setOpenExternalLinks(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// implement in the future
void MainWindow::on_decToHex_button_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Decimal to Hex is not supported yet, check the GitHub for updates");
    msgBox.setIcon(QMessageBox::Warning);
    msgBox.setWindowTitle("Decimal to Hexadecimal Conversion");
    msgBox.button(QMessageBox::Ok);
    msgBox.exec();
}

// implement in the future
void MainWindow::on_dectoBin_button_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Decimal to Binary is not supported yet, check the GitHub for updates");
    msgBox.setIcon(QMessageBox::Warning);
    msgBox.setWindowTitle("Decimal to Binary Conversion");
    msgBox.button(QMessageBox::Ok);
    msgBox.exec();
}

// open new window
void MainWindow::on_hexToDec_Button_clicked()
{
    // I don't know how to not reset the window unfortunately but this allows multiple windows to be open which is what I wanted
    hToDWin.reset(new hexToDecWindow);
    hToDWin->setWindowTitle("Hexadecimal to Decimal");
    hToDWin->show();
}


void MainWindow::on_binToHex_button_clicked()
{
    // I don't know how to not reset the window unfortunately but this allows multiple windows to be open which is what I wanted
    bToHWin.reset(new bintohexwindow);
    bToHWin->setWindowTitle("Binary to Hexadecimal");
    bToHWin->show();
}


void MainWindow::on_hexToBin_button_clicked()
{
    // I don't know how to not reset the window unfortunately but this allows multiple windows to be open which is what I wanted
    hToBWin.reset(new hextobinwindow);
    hToBWin->setWindowTitle("Hexadecimal to Binary");
    hToBWin->show();
}


void MainWindow::on_binToDec_button_clicked()
{
    // I don't know how to not reset the window unfortunately but this allows multiple windows to be open which is what I wanted
    bToDWin.reset(new binToDecWindow);
    bToDWin->setWindowTitle("Binary to Decimal");
    bToDWin->show();
}

