#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
    public:
        Car(std::string b, std::string m, int y);

        void printData() const;

    private:
        std::string brand;
        std::string model;
            int yearModel;



};

#endif // CAR_H
