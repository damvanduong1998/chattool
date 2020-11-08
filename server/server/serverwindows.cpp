#include "serverwindows.h"

serverwindows::serverwindows()
{
    // tao table server simple
    // tao va sap xep widget
    status = new QLabel();
    exit = new QPushButton(tr("exit"));

   connect(exit,SIGNAL(clicked()),qApp,SLOT(quit()));

   QVBoxLayout *lay = new QVBoxLayout();
   lay->addWidget(status);
   lay->addWidget(exit);
   setLayout(lay);
   setWindowTitle(tr("may chu team 1"));

   // xay dung may chu

   server = new QTcpServer(this);

   // lang nghe ket noi tu moi dia chi
   if(!server->listen(QHostAddress::Any,1234))
   {
       status->setText(tr("server can't start. Causion :<br />") +server->errorString());

   }
   else
   {
       status->setText(tr("server was opend at the port : <strong>")+QString::number(server->serverPort())+tr(",/strong>.<br /> you can login to disscus"));
       connect(server,SIGNAL(newConnection()),this,SLOT(ketnoimoi()));
   }

   sizemes = 0;

}

void serverwindows::ketnoimoi()
{
    sendmestoall(tr("<em>Một người mới  vừa tham gia với chúng ta !</em>"));
    QTcpSocket *newuser = server->nextPendingConnection();
    user << newuser;
    connect(newuser ,SIGNAL(readyRead()),this, SLOT(nhandulieu()));
    connect(newuser ,SIGNAL(disconnected()),this,SLOT(ngatketnoi()));
}
void serverwindows::nhandulieu() {
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    if (socket == 0) {
        return;
    }

    QDataStream in(socket);

    if (sizemes == 0) {
         if (socket->bytesAvailable() < (int)sizeof(quint16)) {
             return;
        }
        in >> sizemes;
   }

    // Biet kich thuoc, chung ta se kiem tra xem da nhan duoc toan bo tin nhan chua
    if (socket->bytesAvailable() < sizemes) { // Neu chua nhan du tin nhan thi thoat xu ly
        return;
    }

    QString tinNhan;
    in >> tinNhan;

    sendmestoall(tinNhan);

    // Dat lai kich thuoc la 0 de cho tin nhan tiep theo
    sizemes = 0;
}

void serverwindows::ngatketnoi() {
    sendmestoall(tr("<em>1 người dùng vừa mới rời đi</em>"));

    // Xac dinh xem ai la nguoi ngat ket noi
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    if (socket == 0) { // Neu khong tim thay nguoi gui tin hieu thi huy bo xu ly
        return;
    }

    user.removeOne(socket);
    socket->deleteLater();
}

void serverwindows::sendmestoall(const QString &tinNhan) {
    // Chuan bi tin nhan gui di
    QByteArray goiTinNhan;

    QDataStream out(&goiTinNhan, QIODevice::WriteOnly);
    out << (quint16) 0; // Viet gia tri 0 o dau goi tin de dat truoc cho de viet kich thuoc tin nhan
    out << tinNhan; // Viet noi dung tin nhan vao goi tin
    out.device()->seek(0); // Quay ve dau goi tin
    out << (quint16) (goiTinNhan.size() - sizeof(quint16)); // Thay 0 bang gia tri kich thuoc that cua tin nhan

    // Gui tin cho tat ca nguoi dung ket noi
    for (int i = 0; i < user.size(); i++) {
        user[i]->write(goiTinNhan);
    }
}
