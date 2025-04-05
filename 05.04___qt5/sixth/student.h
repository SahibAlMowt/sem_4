#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
private:
    QString faculty;
    QString name;

public:
    Student(QString, QString);
    QString get_name() const;
    QString get_faculty() const;
};

#endif // STUDENT_H
