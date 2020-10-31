//
// Created by lunde on 2020/10/31.
//

#ifndef THIS_STUDENT_H
#define THIS_STUDENT_H

#include <iostream>

using namespace std;

class Student;
class Professor;


class Student
{
public:
    int banji;
    Professor* p_professor;

    void yuxi(Student * a);

    void xuanke();

    void tingke() const;

};



#endif //THIS_STUDENT_H
