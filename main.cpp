#include "helloworldwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloWorldWindow w;
    w.show();

    return a.exec();
}
