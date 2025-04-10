#include <QTextStream>
#include <QVector>

int main()
{
    QTextStream out(stdout);

    QVector<int> vals = {1,2,3,4,5};

    out << vals.size() << Qt::endl;
    out << vals.first() << Qt::endl;
    out << vals.last() << Qt::endl;

    vals.append(6);
    vals.prepend(0);

    for(int val:vals)
    {
        out << val << " ";
    }

    out << Qt::endl;

    return 0;
}
