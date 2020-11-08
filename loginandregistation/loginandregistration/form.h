#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QtNetwork>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
public:
        Form();

    private slots:
        //void anNutKetNoi();
        void anNutGuiTin();
        void anEnterGuiTin();
        void nhanDuLieu();
        void ketNoi();
        void ngatKetNoi();
        void loiSocket(QAbstractSocket::SocketError loi);

    private:
        QTcpSocket *socket; // May chu
        quint16 kichThuoc;
private:
    Ui::Form *ui;
};

#endif // FORM_H
