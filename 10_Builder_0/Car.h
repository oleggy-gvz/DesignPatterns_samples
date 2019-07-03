#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string Engine;
    string Frame;
    string Wheels;
    string Luxury;
    string Multimedia;
    string Safety;

public:
    friend ostream & operator<<(ostream &, const Car &);
};

// переопределяем оператор << для объектов-наследников ICommand
ostream & operator<<(ostream &out, const Car &car)
{
    out << "Frame: " << car.Frame << endl;
    out << "Engine: " << car.Engine << endl;
    out << "Wheels: " << car.Wheels << endl;
    out << "Multimedia: " << car.Multimedia << endl;
    out << "Safety: " << car.Safety << endl;
    out << "Luxury: " << car.Luxury << endl;

    return out;
}

#endif // CAR_H
