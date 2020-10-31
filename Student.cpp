//
// Created by lunde on 2020/10/31.
//
#include <iostream>
#include "Student.h"
#include "Professor.h"

using namespace std;

void Student::yuxi(Student * a)  {

    this->p_professor = new Professor(a->banji);
    this->p_professor->p_student = a;


    cout << "Student yuxi" << endl;
    std::cout << this->p_professor << std::endl;
    std::cout << a << std::endl;

    this->p_professor->shangke();

}

void Student::xuanke()
{
    this->yuxi(this);
}

void Student::tingke() const
{
    cout << "Student tingke" << endl;
    std::cout << this->p_professor << std::endl;
    std::cout << this << std::endl;
}