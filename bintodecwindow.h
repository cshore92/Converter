#ifndef BINTODECWINDOW_H
#define BINTODECWINDOW_H

#include <QDialog>

namespace Ui {
class binToDecWindow;
}

class binToDecWindow : public QDialog
{
    Q_OBJECT

public:
    explicit binToDecWindow(QWidget *parent = nullptr);
    ~binToDecWindow();

private:
    Ui::binToDecWindow *ui;
};

#endif // BINTODECWINDOW_H
