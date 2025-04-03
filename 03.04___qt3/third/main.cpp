#include <QTextStream>
#include <QTime>
#include <QDate>

int main()
{
    QTextStream out(stdout);
    out.setCodec("CP866");

    QDate dt1(2001,9,11);
    QDate dt2(2025,4,1);

    if(dt1 < dt2)
    {
        out << dt1.toString() << " comes before " << dt2.toString() << Qt::endl;
    }
    else
    {
        out << dt2.toString() << " comes before " << dt1.toString() << Qt::endl;
    }

    return 0;
}
