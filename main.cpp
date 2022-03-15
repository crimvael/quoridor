#include "quoridor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Quoridor w;
    w.show();
    return a.exec();
}
