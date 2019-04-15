#ifndef WHEELS_H
#define WHEELS_H

#include <iostream>

using namespace std;

class Wheels
{
public:
    virtual ~Wheels() = 0; // делаем абстрактный класс, затычка - чистый деструктор
};

Wheels::~Wheels()
{}

#endif // WHEELS_H
