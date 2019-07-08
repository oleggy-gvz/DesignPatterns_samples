#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Car
{
public:
    string Engine;
    string Frame;
    string Wheels;
    string Luxury;
    string Multimedia;
    string Safety;

public:
    friend ostream & operator<<(ostream &out, shared_ptr<Car> car);
};

ostream & operator<<(ostream &out, shared_ptr<Car> car)
{
    out << "Frame: " << car->Frame << endl;
    out << "Engine: " << car->Engine << endl;
    out << "Wheels: " << car->Wheels << endl;
    out << "Multimedia: " << car->Multimedia << endl;
    out << "Safety: " << car->Safety << endl;
    out << "Luxury: " << car->Luxury << endl;

    return out;
}

#endif // CAR_H
