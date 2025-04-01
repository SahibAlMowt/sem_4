#include <QTextStream>


int main()
{
    QTextStream out(stdout);
    QString a = "love";

    a.append(" MSU");
    a.prepend("I ");

    out << a << endl;

    out << "The string has " << a.count() << " symboles" << endl;

    out << a.toUpper() << endl;
    out << a.toLower() << endl;

    return 0;
}
