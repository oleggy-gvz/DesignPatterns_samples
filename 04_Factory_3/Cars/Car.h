#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include <memory>
#include "Parts\Engine.h"
#include "Parts\Paint.h"
#include "Parts\Wheels.h"

using namespace std;

class Car
{
protected:
    string Name = "";
    string Body = "Caravan";

    // запчасти
    shared_ptr<Engine> engine;
    shared_ptr<Paint> paintColor;
    shared_ptr<Wheels> wheels;

public:
    virtual void Configure() = 0;

    void AssembleBody()
    {
        cout << "Body is assembled" << endl;
    }

    void InstallEngine()
    {
        cout << "Engine is in its place" << endl;
    }

    void Paint()
    {
        cout << "Car is painted" << endl;
    }

    void InstallWheels()
    {
        cout << "Wheels are installed" << endl;
    }
};

#endif // CAR_H
