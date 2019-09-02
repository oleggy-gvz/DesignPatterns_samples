#ifndef CAR_HPP
#define CAR_HPP

#include <string>
#include <iostream>

using namespace std;

class Car
{
protected:
    string Name = "";
    string Engine = "Diesel";
    string Body = "Caravan";
    string PaintColor ="White";
    string Wheels = "16 inch";

public:
    void Configure()
    {
        cout << "Configuring " << Name << endl;
        cout << "Engine is: " << Engine << endl;
        cout << "Body is: " << Body << endl;
        cout << "PaintColor is: " << PaintColor << endl;
        cout << "Wheels are: " << Wheels << endl;
    }

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

#endif // CAR_HPP
