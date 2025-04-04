#include <QTextStream>
//#include <QStringList>

int main()
{
    QTextStream out(stdout);

    QString faculties = "app_math_1 , app_math_2 , app_math_3 , app_math_4 , app_math_5";

    QStringList msu = faculties.split(",");

    QStringListIterator it(msu);

    while(it.hasNext())
    {
        out << it.next().trimmed() << Qt::endl; // trimmed for delete spaces
    }

    return 0;
}
