#include <QTextStream>
#include <QDateTime>
#include <ctime>

int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    time_t t = time(0);

    out << t << Qt::endl;

    QDateTime dt;
    dt.setTime_t(t);

    out << dt.toString() << Qt::endl;

    QDateTime cd = QDateTime::currentDateTime();

    out << cd.toTime_t() << Qt::endl;

    return 0;
}
