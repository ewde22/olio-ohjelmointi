#include <iostream>
#include <memory>
#include <windows.h>
#include "animal.h"
#include "dog.h"

using namespace std;

int main() {
    //ääkköset
    SetConsoleOutputCP(65001);

    std::unique_ptr<Animal> animal = std::make_unique<Animal>();
    animal->callOut();

    std::unique_ptr<Animal> dog = std::make_unique<Dog>();
    dog->callOut();

    return 0;
}
