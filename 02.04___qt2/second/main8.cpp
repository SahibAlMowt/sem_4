#include <QTextStream>
#include <QDate>
#include <QTime>

int main()
{
    QTextStream out(stdout);

    out.setCodec("CP866"); // UTF-8

    QDate dt1(2025,4,2);
    out << "today's date " << dt1.toString() << Qt::endl;

    QDate dt2;
    dt2.setDate(2025,7,8);

    QTime tm1(17,30,12,55);
    out << "time is " << tm1.toString("hh:mm:ss.zzz") << Qt::endl;

    QTime tm2;
    tm2.setHMS(13,57,42,777);
    out << "time is " << tm2.toString("hh:mm:ss.zzz") << Qt::endl;

    return 0;
}
