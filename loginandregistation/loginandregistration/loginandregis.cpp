#include "loginandregis.h"
#include "ui_loginandregis.h"
#include "form.h"
#include "ui_form.h"


loginandregis::loginandregis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginandregis)
{
    ui->setupUi(this);
    ui->userg->setPlaceholderText("enter you usename");
    ui->passrg->setPlaceholderText("enter your password");
    ui->phonerg->setPlaceholderText("enter your phone number");
    ui->uselg->setPlaceholderText("enter your use name");
    ui->passlg->setPlaceholderText("enter your password");
}

loginandregis::~loginandregis()
{
    delete ui;
}

void loginandregis::on_butlg_clicked()
{

  close();
  //ab().show();
}
