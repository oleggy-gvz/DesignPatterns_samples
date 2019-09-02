#ifndef PAINT_HPP
#define PAINT_HPP

#include <iostream>

using namespace std;

class Paint
{
public:
    virtual ~Paint() = 0; // делаем абстрактный класс, затычка - чистый деструктор
};

Paint::~Paint()
{}

#endif // PAINT_HPP
