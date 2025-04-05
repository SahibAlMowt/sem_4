#include <QList>
#include <algorithm>
#include <QTextStream>

#include "student.h"

int main()
{
    QTextStream out(stdout);
    QList<Student> students = {Student("Aleksandra Speranskiy", "app_math"),
                                Student("Eminemaldo", "phylology"),
                                Student("Jack Potroshit", "physic"),
                                Student("Kanye Westik", "phylology"),
                                Student("Cristiano Runalddu", "ekonom"),
                                Student("Walter", "chemistry"),
                                Student("Diego", "app_math"),
                                Student("Pablo Escobarik", "chemistry"),
                               Student("Vito Scaletta", "ekonom")};

    std::sort(students.begin(), students.end(),[](const Student &s1, const Student &s2){return s1.get_name() < s2.get_name();});

    for(Student stud: students)
    {
        out << stud.get_name() << " : " << stud.get_faculty() << Qt::endl;
    }

    return 0;
}
