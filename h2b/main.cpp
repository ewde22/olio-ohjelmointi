#include <iostream>
#include <vector>
#include "car.h"

int main() {
    //carList niminen vektori pinoon
    std::vector<Car> carList;

    //lisätään kolme autoa listaan
    carList.push_back(Car("Toyota", "Corolla", 2008));
    carList.push_back(Car("Honda", "Accord", 1995));
    carList.push_back(Car("Seat", "Cordoba", 2004));

    //tulostetaan toisen alkion tiedot
    std::cout << "Toisen alkion tiedot: " << std::endl;
    carList[1].printData();
    std::cout << std::endl;

    //tulostetaan kaikkien autojen tiedot for-silmukalla
    std::cout << "Kaikkien autojen tiedot: " << std::endl;
    for (std::size_t i = 0; i < carList.size(); i++) {
        carList[i].printData();
    }

    return 0;
}
