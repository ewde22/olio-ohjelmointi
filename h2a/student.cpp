#include <iostream>
#include "student.h"

using namespace std;

//name getter
string Student::getName() const
{
    return name;
}
//name setter
void Student::setName(const string &newName)
{
    name = newName;
}
//number getter
int Student::getStudentNumber() const
{
    return studentNumber;
}
//number setter
void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}
//average getter
double Student::getAverage() const
{
    return average;
}
//average setter
void Student::setAverage(double newAverage)
{
    average = newAverage;
}

