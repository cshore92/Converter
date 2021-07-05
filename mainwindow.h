#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QMessageBox"
#include "bintodecwindow.h"
#include "bintohexwindow.h"
#include "hextobinwindow.h"
#include "hextodecwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_decToHex_button_clicked();

    void on_dectoBin_button_clicked();

    void on_hexToDec_Button_clicked();

    void on_binToHex_button_clicked();

    void on_hexToBin_button_clicked();

    void on_binToDec_button_clicked();

private:
    Ui::MainWindow *ui;

    //never used smart pointers....going to practice with them
    std::unique_ptr<hexToDecWindow> hToDWin;
    std::unique_ptr<bintohexwindow> bToHWin;
    std::unique_ptr<hextobinwindow> hToBWin;
    std::unique_ptr<binToDecWindow> bToDWin;
};
#endif // MAINWINDOW_H
