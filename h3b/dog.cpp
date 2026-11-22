#include "dog.h"
#include <iostream>

Dog::Dog() {
    std::cout << "Dog-olio luotu." << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog-olio tuhottu." << std::endl;
}

void Dog::callOut() {
    std::cout << "Koira haukkuu." << std::endl;
}
