#include "car.h"
#include <iostream>

Car::Car(std::string b, std::string m, int y) {
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData() const {
    std::cout <<"Merkki: " << brand << std::endl;
    std::cout <<"Malli: " << model << std::endl;
    std::cout <<"Vuosimalli: " <<yearModel << std::endl;
}
