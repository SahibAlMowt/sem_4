#include <QTextStream>
#include <QDate>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    QDate cd = QDate::currentDate();

    out << cd.toString("yyyy-MM-dd") << Qt::endl;
    out << cd.toString("yy/M/dd") << Qt::endl;
    out << cd.toString("d. M. yyyy") << Qt::endl;
    out << cd.toString("d-MMMM-yyyy") << Qt::endl;

    return 0;
}
