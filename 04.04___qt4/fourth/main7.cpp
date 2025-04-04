#include <QTextStream>
#include <QDateTime>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    QDateTime cdt = QDateTime::currentDateTime();

    out << "UTC " << cdt.toUTC().toString() << Qt::endl;
    out << "Local " << cdt.toLocalTime().toString() << Qt::endl;

    return 0;
}


