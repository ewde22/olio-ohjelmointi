#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string chefName);
    ~ItalianChef();
    std::string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
