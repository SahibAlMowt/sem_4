#include <QTextStream>
#include <QDate>
#include <QTime>

int main()
{
    QTextStream out(stdout);
    out.setCodec("CP866");


    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();

    out << cd.toString() << Qt::endl;
    out << ct.toString() << Qt::endl;

    return 0;
}
