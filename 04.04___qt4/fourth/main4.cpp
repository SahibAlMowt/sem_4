#include <QTextStream>
#include <QDate>

int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");

    QDate cd = QDate::currentDate();

    out << "gregorian: " << cd.toString(Qt::ISODate) << Qt::endl;
    out << "julian: " << cd.toJulianDay() << Qt::endl;


    return 0;
}
