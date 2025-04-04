#include <QTextStream>
#include <algorithm>
//#include <QList>
#include <QSet>

int main()
{
    QTextStream out(stdout);

    QSet<QString> technikal = {"app_math_1", "app_math_2", "app_math_3"};
    QSet<QString> not_technikal = {"not_app_math_1", "not_app_math_2", "not_app_math_3"};

    out << technikal.size() << Qt::endl;

    not_technikal.insert("not_app_math_4");

    out << not_technikal.size() << Qt::endl;

    technikal.unite(not_technikal);

    out << technikal.size() << Qt::endl;

    for(QString faculty: technikal)
    {
        out << faculty << Qt::endl;
    }

    QList<QString> l_technikal = technikal.values();

    std::sort(l_technikal.begin(), l_technikal.end());

    out << "----------------" << Qt::endl;

    for(QString val: l_technikal)
    {
        out << val << Qt::endl;
    }

    return 0;
}
