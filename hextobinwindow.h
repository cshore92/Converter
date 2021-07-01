#ifndef HEXTOBINWINDOW_H
#define HEXTOBINWINDOW_H

#include <QDialog>

namespace Ui {
class hextobinwindow;
}

class hextobinwindow : public QDialog
{
    Q_OBJECT

public:
    explicit hextobinwindow(QWidget *parent = nullptr);
    ~hextobinwindow();

private:
    Ui::hextobinwindow *ui;
};

#endif // HEXTOBINWINDOW_H
