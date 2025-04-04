#include <QMap>
#include <QTextStream>

int main()
{
    QTextStream out(stdout);

    QMap<QString, int> students =
                                {
                                    {"app_math", 60 },
                                    {"economic", 45},
                                    {"phisics", 20},
                                    {"chemics", 15},
                                    {"philology", 40},
                                    {"psix", 50}
                                };

    students.insert("new_app_math", 0);

    QList<int> values = students.values();

    out << "Values: " << Qt::endl;

    for(int val:values)
    {
        out << val << Qt::endl;
    }

    QList<QString> keys = students.keys();

    out << "Keys: " << Qt::endl;

    for(QString key:keys)
    {
        out << key << Qt::endl;
    }

    QMapIterator<QString, int> it(students);

    out << "pairs " << Qt::endl;

    while(it.hasNext())
    {
        it.next();
        out << it.key() << " " << it.value() << Qt::endl;
    }

    return 0;
}
