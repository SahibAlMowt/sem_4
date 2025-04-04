#include <QTextStream>
#include <QDate>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    QList<QString> months;

    months.append("Январь");
    months.append("Февраль");
    months.append("Март");
    months.append("Апрель");
    months.append("Май");
    months.append("Июнь");
    months.append("Июль");
    months.append("Август");
    months.append("Сентябрь");
    months.append("Октябрь");
    months.append("Ноябрь");
    months.append("Декабрь");

    QDate dt1(2025,4,1);
    QDate dt2(2024,2,11);
    QDate dt3(2023,1,7);
    QDate dt4(2020,3,3);
    QDate dt5(2022,7,8);
    QDate dt6(2025,2,5);

    out << QString("Дней: ") << dt1.daysInMonth() << QString(" в месяце ") << months.at(dt1.month() - 1) << Qt::endl;
    out << QString("Дней: ") << dt2.daysInMonth() << QString(" в месяце ") << months.at(dt2.month() - 1) << Qt::endl;
    out << QString("Дней: ") << dt3.daysInMonth() << QString(" в месяце ") << months.at(dt3.month() - 1) << Qt::endl;
    out << QString("Дней: ") << dt4.daysInMonth() << QString(" в месяце ") << months.at(dt4.month() - 1) << Qt::endl;
    out << QString("Дней: ") << dt5.daysInMonth() << QString(" в месяце ") << months.at(dt5.month() - 1) << Qt::endl;
    out << QString("Дней: ") << dt6.daysInMonth() << QString(" в месяце ") << months.at(dt6.month() - 1) << Qt::endl;

    return 0;
}
