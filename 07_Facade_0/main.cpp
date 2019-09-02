/*
 * ПАТТЕРН "ФАСАД"
 * Паттерн призван обобщать некий набор разрозненных классов/интерфейсов в один общий упрощенный интерфейс посредством композиции этих объектов.
 *
 * Пример:
 * -------
 * Эмуляция работы стиральной машины. Она имеет различные подсистемы внутри себя которые выполняют различные функции. Барабан (Engine), система подачи воды
 * (WaterManagingSubsystem), система нагрева воды (Thermo), сушилка (Dryer).
 * Допустим у нас есть все эти системы по отдельности, но нет устройства которое всем этим управляет.
 * Создаем свой набор действий для стирки шерсти, хлопка.
 *
 * Проблема проектирования:
 * -----------------------
 * Абсолютно неудобно использовать различные разрозненные классы. Лучше наборы вызовой методов скрыть от пользователя и выдавать в виде упрощенного
 * интерфейса.
 *
 */

#include <iostream>
#include "WashingMachine\WaterManagingSubsystem.hpp"
#include "WashingMachine\Dryer.hpp"
#include "WashingMachine\Engine.hpp"
#include "WashingMachine\Thermo.hpp"
#include <memory>

using namespace std;

int main()
{
    shared_ptr<WaterManagingSubsystem> water(new WaterManagingSubsystem());
    shared_ptr<Thermo> thermo(new Thermo());
    shared_ptr<Engine> engine(new Engine());
    shared_ptr<Dryer> dryer(new Dryer());

    cout << "Cotton" << endl; // для хлопока
    water->FillWater(10);
    thermo->WarmUp(70);
    engine->Rotate();
    engine->Rotate();
    engine->Rotate();
    engine->Stop();
    water->EmptyWater();
    dryer->Dry(30, 1000);
    water->FillWater(15);
    thermo->WarmUp(50);
    engine->Rotate();
    engine->Rotate();
    engine->Rotate();
    engine->Stop();
    water->EmptyWater();
    dryer->Dry(60, 1500);
    cout << endl;

    cout << "Wool" << endl; // для шерсти
    water->FillWater(7);
    thermo->WarmUp(30);
    engine->Rotate();
    engine->Stop();
    water->EmptyWater();
    dryer->Dry(20, 500);
    water->FillWater(10);
    thermo->WarmUp(20);
    engine->Rotate();
    engine->Stop();
    water->EmptyWater();
    dryer->Dry(60, 700);
    cout << endl;

    return 0;
}
