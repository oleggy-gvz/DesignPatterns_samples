#ifndef GOLF_HPP
#define GOLF_HPP

#include "Car.hpp"

class Golf : public Car
{
public:
    Golf()
    {
        Name = "Golf";
        Body = "Hatchback";
    }
};

#endif // GOLF_HPP
