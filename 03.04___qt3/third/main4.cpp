#include <QTextStream>
#include <QDate>
#include <QTime>

int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");

    QDate cd = QDate::currentDate();

    out << cd.toString(Qt::TextDate) << Qt::endl;
    out << cd.toString(Qt::ISODate) << Qt::endl;
    out << cd.toString(Qt::SystemLocaleShortDate) << Qt::endl;
    out << cd.toString(Qt::SystemLocaleLongDate) << Qt::endl;
    out << cd.toString(Qt::DefaultLocaleShortDate) << Qt::endl;
    out << cd.toString(Qt::DefaultLocaleLongDate) << Qt::endl;
    out << cd.toString(Qt::SystemLocaleDate) << Qt::endl;
    out << cd.toString(Qt::LocaleDate) << Qt::endl;

    out << "===================" << Qt::endl;

    QTime ct = QTime::currentTime();

    out << ct.toString(Qt::TextDate) << Qt::endl;
    out << ct.toString(Qt::ISODate) << Qt::endl;
    out << ct.toString(Qt::SystemLocaleShortDate) << Qt::endl;
    out << ct.toString(Qt::SystemLocaleLongDate) << Qt::endl;
    out << ct.toString(Qt::DefaultLocaleShortDate) << Qt::endl;
    out << ct.toString(Qt::DefaultLocaleLongDate) << Qt::endl;
    out << ct.toString(Qt::SystemLocaleDate) << Qt::endl;
    out << ct.toString(Qt::LocaleDate) << Qt::endl;

    return 0;
}
