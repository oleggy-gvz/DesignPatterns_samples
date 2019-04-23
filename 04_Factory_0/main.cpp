/*
 * ПАТТЕРН "ЗАВОД"
 * Используется для того что бы избегать прямого создания объектов в коде. Т.е. призван убрать такие зависимости либо попытатся максимально отделить от работы
 * с объектом от кода создания этого объекта.
 * Когда в программе цель "слабая связанность" и программирование на "уровне интерфейсов" (а не реализаций) то использование в коде в явном виде "new" то происходит
 * автоматическое связывание с этим классом т.е. происходит "жесткое" связывание которое идет вразрез с целью в "слабой" связанности.
 *
 * Пример:
 * -------
 * Симулятор автомобильного завода, автомобильных магазинов дилеров. Авт. завод выпускает машины разных типов, но создаются они по одной и той же схеме.
 * У завода 5 основных методов: заказ на тип машины, сборка корпуса, установка двигателя, покраска, крепеж колес. В примере данные методы добавим в класс Car, хотя
 * так делать неверно.
 *
 * Проблема проектирования:
 * -----------------------
 * При появлении изменений, к примеру исключении/появлении какого либо класса машины придется править код. У нас в классе VolkswagenFacility жесткая зависимость от типа
 * который создается. Что бы этого избежать используется паттерн Фабрика.
 * Паттерн Фабрика предназначен максимально разделить код содание объекта и код работы с объектом.
 *
 */

#include <iostream>
#include <string>
#include <memory>

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

class Golf : public Car
{
public:
    Golf()
    {
        Name = "Golf";
        Body = "Hatchback";
    }
};

class Passat : public Car
{
public:
    Passat()
    {
        Name = "Passat";
        Body = "Sedan";
    }
};

class Tiguan : public Car
{
public:
    Tiguan()
    {
        Name = "Tiguan";
        Body = "Crossover";
    }
};


class Tuareg : public Car
{
public:
    Tuareg()
    {
        Name = "Tuareg";
        Body = "Big Crossover";
    }
};

class VolkswagenFacility : public Car
{
public:
    shared_ptr<Car> GetCar(const string &type)
    {
        shared_ptr<Car> car;

        if (type == "Golf")         car = shared_ptr<Car>(new Golf());
        else if (type == "Passat")  car = shared_ptr<Car>(new Passat());
        else if (type == "Tiguan")  car = shared_ptr<Car>(new Tiguan());
        else if (type == "Tuareg")  car = shared_ptr<Car>(new Tuareg());
        else                        car = shared_ptr<Car>(new Car());

        car->Configure();
        car->AssembleBody();
        car->InstallEngine();
        car->Paint();
        car->InstallWheels();

        return car;
    }
};

int main()
{
    VolkswagenFacility facility;

    facility.GetCar("Golf");
    cout << endl;

    facility.GetCar("Passat");
    cout << endl;

    facility.GetCar("Tiguan");
    cout << endl;

    facility.GetCar("Tuareg");
    cout << endl;

    return 0;
}
