//
// Created by lunde on 2020/10/31.
//

#ifndef THIS_PROFESSOR_H
#define THIS_PROFESSOR_H

#include <iostream>
#include "Student.h"

using namespace std;

class Professor
{
public:
    int banji;
    Student * p_student;

    Professor(int _banji): banji{_banji}, p_student{new Student} {}

    void shangke() const
    {
        cout << "Professor Shangke" << endl;
        cout << this << endl;
        cout << p_student << endl;
        p_student->tingke();
    }
};



#endif //THIS_PROFESSOR_H
