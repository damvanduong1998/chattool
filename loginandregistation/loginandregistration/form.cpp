#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    ui->makemes->setPlaceholderText("enter your mess");
    socket = new QTcpSocket(this);
       connect(socket, SIGNAL(readyRead()), this, SLOT(nhanDuLieu()));
       connect(socket, SIGNAL(connected()), this, SLOT(ketNoi()));
       connect(socket, SIGNAL(disconnected()), this, SLOT(ngatKetNoi()));
       connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(loiSocket(QAbstractSocket::SocketError)));


       connect(ui->butsend, SIGNAL(clicked()), this, SLOT(anNutGuiTin()));
       connect(ui->makemes, SIGNAL(returnPressed()), this, SLOT(anEnterGuiTin()));

       socket->abort();
       socket->connectToHost("127.0.0.1", 1234); // Ket noi toi may chu
       kichThuoc = 0;
   }

   // Gui tin den may chu
   void Form::anNutGuiTin() {
       QByteArray goiTin;
       QDataStream out(&goiTin, QIODevice::WriteOnly);

       // Chuan bi goi tin de gui di
      // QString tinGuiDi = tr("<strong>") + nickname->text() +tr("</strong> : ") + khungSoanThao ->text();
        QString tinGuiDi =  ui->makemes->text();
       out << (quint16) 0;
       out << tinGuiDi;
       out.device()->seek(0);
       out << (quint16) (goiTin.size() - sizeof(quint16));

       socket->write(goiTin); // Gui goi tin

       ui->makemes->clear(); // Xoa tin vua gui khoi khung soan thao
        ui->makemes ->setFocus();
   }

   void Form::anEnterGuiTin() {
       anNutGuiTin();
   }

   void Form::nhanDuLieu() {
       QDataStream in(socket);
       if (kichThuoc == 0) {
            if (socket->bytesAvailable() < (int)sizeof(quint16)) { //Kich thuoc goi tin nho hon kich thuc kieu so nguyen
                return;
           }
           in >> kichThuoc; // Neu nhan duoc kich thuoc tin nhan thi lay ra gia tri do
       }
       // Biet kich thuoc, chung ta se kiem tra xem da nhan duoc toan bo tin nhan chua
       if (socket->bytesAvailable() < kichThuoc) { // Neu chua nhan du tin nhan thi thoat xu ly
           return;
       }
       QString tinNhan;
       in >> tinNhan;

       ui->spacechat->append(tinNhan);

       // Dat lai kich thuoc la 0 de cho tin nhan tiep theo
       kichThuoc = 0;
   }

   // Slot kich hoat khi ket noi thanh cong
   void Form::ketNoi() {
       ui->spacechat->append(tr("<em>Kết nối thành công !</em>"));
       //nutKetNoi->setEnabled(true);
   }

   // Slot kich hoat khi thoat ket noi
   void Form::ngatKetNoi() {
       ui->spacechat->append(tr("<em>Tạm biệt, hẹn gặp lại sau !</em>"));
   }

   // Slot kich hoat khi co loi socket
   void Form::loiSocket(QAbstractSocket::SocketError loi) {
       switch(loi) { // Hien thi thong bao khac nhau tuy theo loi gap phai
           case QAbstractSocket::HostNotFoundError:
               ui->spacechat->append(tr("<em>LỖI : Không thể kết nối tới máy chủ ! Vui lòng kiểm tra lại địa chỉ IP và cổng truy cập.</em>"));
               break;
           case QAbstractSocket::ConnectionRefusedError:
              ui->spacechat->append(tr("<em>LỖI : Máy chủ từ chối truy cập ! Vui lòng kiểm tra chắc chắn là máy chủ đã được khởi động. Lưu ý đồng thời lỗi địa chỉ IP và cổng truy cập.</em>"));
               break;
           case QAbstractSocket::RemoteHostClosedError:
               ui->spacechat->append(tr("<em>LỖI : Máy chủ đã ngắt kết nối !</em>"));
               break;
           default:
               ui->spacechat->append(tr("<em>LỖI : ") + socket->errorString() + tr("</em>"));
       }
       //nutKetNoi->setEnabled(true);
   }

Form::~Form()
{
    delete ui;
}
