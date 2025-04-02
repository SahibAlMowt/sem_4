#include <QTextStream>

int main()
{
    QTextStream out(stdout);

    QString str = "I love MSU";

    out << str.right(5) << Qt::endl;
    out << str.left(4) << Qt::endl;
    out << str.mid(4,5) << Qt::endl;

    QString str2("Baku MSU Branch");
    QStringRef sub(&str2, 0, 7);

    out << sub.toString() << Qt::endl;

    return 0;
}
