#include <iostream>
#include <iomanip>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //Car
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2008);

    myCar.printData();

    //Rectangle
    Rectangle* myRectangle = new Rectangle();

    myRectangle->setWidth(22.22);
    myRectangle->setHeight(31.31);

    cout << fixed << setprecision(2);
    cout << "Area: " << myRectangle->getArea() << endl;
    cout << "Circumference: " << myRectangle->getCircum() << endl;

    delete myRectangle;

    //Student
    unique_ptr<Student> myStudent = make_unique<Student>();

    myStudent->setName("Eeva");
    myStudent->setStudentNumber(22);
    myStudent->setAverage(4.85);

    cout << "Student name: " << myStudent->getName() << endl;
    cout << "Student number: " << myStudent->getStudentNumber() << endl;
    cout << "Average: " << myStudent->getAverage() << endl;

    return 0;




}
