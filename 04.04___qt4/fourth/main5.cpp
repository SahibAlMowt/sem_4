#include <QTextStream>
#include <QDate>

int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");


    QDate dt(2025,6,1);
    QDate ndt = dt.addDays(42);

    QDate chill(2025,6,30);

    out << "42 days from " << dt.toString() << " is " << ndt.toString() << Qt::endl;

    out << "there are " << QDate::currentDate().daysTo(chill) << " days till chill" << Qt::endl;

    return 0;
}
