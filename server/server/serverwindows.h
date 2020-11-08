#ifndef serverwindows_H
#define serverwindows_H

#include <QtWidgets>
#include <QtNetwork>

class serverwindows : public QWidget {
    Q_OBJECT

    public:
        serverwindows();
        void sendmestoall(const QString &tinNhan);

    private slots:
        void ketnoimoi();
        void nhandulieu();
        void ngatketnoi();

    private:
        QLabel *status;
        QPushButton *exit;

        QTcpServer *server;
        QList<QTcpSocket *> user;
        quint16 sizemes;
};

#endif
