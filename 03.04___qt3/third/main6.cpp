#include <QTextStream>
#include <QTime>

int main()
{
    QTextStream out(stdout);

    out.setCodec("UTF8");

    QTime ct = QTime::currentTime();

    out << ct.toString("hh.mm.ss.zzz") << Qt::endl;
    out << QLocale("Russian").toString(ct, "h:m:s a") << Qt::endl;
    out << QLocale("Russian").toString(ct, "H:m:s A") << Qt::endl;
    out << QLocale("Russian").toString(ct, "h:m AP") << Qt::endl;

    return 0;
}
