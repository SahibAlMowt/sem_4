#include <QTextStream>
#include <QDate>

int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");

    QDate ramzes2(-1303,5,1);
    QDate mongols(1222, 7, 28);

    int j_today = QDate::currentDate().toJulianDay();
    int j_ramzes2 = ramzes2.toJulianDay();
    int j_mongols = mongols.toJulianDay();

    out << "days since Ramzes II " << j_today - j_ramzes2 << Qt::endl;
    out << "days since mongols " << j_today - j_mongols << Qt::endl;

    return 0;
}
