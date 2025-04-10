#include <QTextStream>
#include <QString>

int main()
{
    QTextStream out(stdout);
    QString a = "love";

    a.append(" MSU");
    a.prepend("I ");

    out << a << Qt::endl;

    out << "The string has " << a.count() << " symboles" << Qt::endl;

    out << a.toUpper() << Qt::endl;
    out << a.toLower() << Qt::endl;

    return 0;
}
