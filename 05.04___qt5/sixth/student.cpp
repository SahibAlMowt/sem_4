#include "student.h"

Student::Student(QString name, QString faculty):name(name), faculty(faculty){}

QString Student::get_name() const
{
    return name;
}

QString Student::get_faculty() const
{
    return faculty;
}

