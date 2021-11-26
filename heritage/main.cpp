#include "heritage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    heritage w;
    w.show();
    return a.exec();
}
