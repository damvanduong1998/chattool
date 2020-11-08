#ifndef TABLECHATFORM_H
#define TABLECHATFORM_H

#include <QWidget>

namespace Ui {
class tablechatform;
}

class tablechatform : public QWidget
{
    Q_OBJECT

public:
    explicit tablechatform(QWidget *parent = nullptr);
    ~tablechatform();

private:
    Ui::tablechatform *ui;
};

#endif // TABLECHATFORM_H
