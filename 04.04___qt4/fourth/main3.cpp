#include <QTextStream>
#include <QDateTime>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    QDateTime cdt = QDateTime::currentDateTime();

    out << cdt.toString() << Qt::endl;
    out << cdt.date().toString() << Qt::endl;
    out << cdt.time().toString() << Qt::endl;

    return 0;
}
