#include "another_menu.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    AnotherMenu window;
    window.resize(250, 150);

    window.setWindowTitle("main7");

    window.show();

    return app.exec();
}
