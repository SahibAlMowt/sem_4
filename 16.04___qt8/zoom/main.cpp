#include "nesting.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc , argv);

    Layouts w;

    w.resize(800, 600);

    w.show();

    return app.exec();
}
