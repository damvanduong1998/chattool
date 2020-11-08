#ifndef LOGINANDREGIS_H
#define LOGINANDREGIS_H
#include "form.h"
#include "ui_form.h"
#include <QWidget>
Form ab();
namespace Ui {
class loginandregis;
}

class loginandregis : public QWidget
{
    Q_OBJECT

public:
    explicit loginandregis(QWidget *parent = nullptr);
    ~loginandregis();

private slots:
    void on_butlg_clicked();

private:
    Ui::loginandregis *ui;
};

#endif // LOGINANDREGIS_H
