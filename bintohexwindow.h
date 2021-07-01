#ifndef BINTOHEXWINDOW_H
#define BINTOHEXWINDOW_H

#include <QDialog>

namespace Ui {
class bintohexwindow;
}

class bintohexwindow : public QDialog
{
    Q_OBJECT

public:
    explicit bintohexwindow(QWidget *parent = nullptr);
    ~bintohexwindow();

private:
    Ui::bintohexwindow *ui;
};

#endif // BINTOHEXWINDOW_H
