#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>

using namespace std;

class Engine
{
public:
    virtual ~Engine() = 0; // делаем абстрактный класс, затычка - чистый деструктор
};

Engine::~Engine()
{}

#endif // ENGINE_H
