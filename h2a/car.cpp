#include <iostream>
#include "car.h"

using namespace std;

Car::Car() {

}

void Car::printData() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Model year: " << yearModel << endl;
}
//temporary variables
void Car::setBrand(string b) {
    brand = b;
}

void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}
