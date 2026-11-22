#include <iostream>
#include "italianchef.h"
#include "chef.h"

int main() {

    Chef chef("Gordon");
    chef.makeSalad();
    chef.makeSoup();


    ItalianChef italianChef("Mario");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << "Chefs name is: " << italianChef.getName() << std::endl;

    return 0;
}
