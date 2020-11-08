#include "tablechatform.h"
#include "ui_tablechatform.h"

tablechatform::tablechatform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tablechatform)
{
    ui->setupUi(this);
}

tablechatform::~tablechatform()
{
    delete ui;
}
