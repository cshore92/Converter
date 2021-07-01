#ifndef HEXTODECWINDOW_H
#define HEXTODECWINDOW_H

#include <QDialog>

namespace Ui {
class hexToDecWindow;
}

class hexToDecWindow : public QDialog
{
    Q_OBJECT

public:
    explicit hexToDecWindow(QWidget *parent = nullptr);
    ~hexToDecWindow();

private:
    Ui::hexToDecWindow *ui;
};

#endif // HEXTODECWINDOW_H
