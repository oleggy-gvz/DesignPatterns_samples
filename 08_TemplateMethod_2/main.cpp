#include <iostream>
#include <memory>
#include "Food\Hamburger.h"
#include "Food\HotDog.h"

/*
 * ПАТТЕРН "ШАБЛОННЫЙ МЕТОД"
 *
 *
 *
 *
 * Проблема проектирования:
 * -----------------------
 *
 *
 */

int main()
{
    shared_ptr<HotDog> hotDog(new HotDog());
    shared_ptr<Hamburger> hamburger(new Hamburger());

    cout << "HotDog" << endl;
    hotDog->Prepare();
    cout << endl;

    cout << "Hamburger" << endl;
    hamburger->Prepare();
    cout << endl;

    return 0;
}
