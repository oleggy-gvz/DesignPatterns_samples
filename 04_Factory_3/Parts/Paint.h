#ifndef PAINT_H
#define PAINT_H

#include <iostream>

using namespace std;

class Paint
{
public:
    virtual ~Paint() = 0; // делаем абстрактный класс, затычка - чистый деструктор
};

Paint::~Paint()
{}

#endif // PAINT_H
