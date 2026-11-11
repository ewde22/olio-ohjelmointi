#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car();
    void printData();
    void setBrand(std::string);
    void setModel(std::string);
    void setYearModel(int);
};

#endif //CAR_H
