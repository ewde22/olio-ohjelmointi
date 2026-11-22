#include "animal.h"
#include <iostream>

Animal::Animal() {
    std::cout << "Animal-olio luotu." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal-olio tuhottu." << std::endl;
}

void Animal::callOut() {
    std::cout << "Eläin ääntelee." << std::endl;
}
