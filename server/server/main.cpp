#include <QApplication>
#include "serverwindows.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    serverwindows table;
    table.show();

    return app.exec();
}
