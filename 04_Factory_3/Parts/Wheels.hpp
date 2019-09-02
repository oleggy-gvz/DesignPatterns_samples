#ifndef WHEELS_HPP
#define WHEELS_HPP

#include <iostream>

using namespace std;

class Wheels
{
public:
    virtual ~Wheels() = 0; // делаем абстрактный класс, затычка - чистый деструктор
};

Wheels::~Wheels()
{}

#endif // WHEELS_HPP
