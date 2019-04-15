/*
 * ======================================================================
 * Паттерн стратегия: определяет семейство алгоритмов, инкапсулирует каждый из них и обеспечивает взаимозаменяемость
 * Принцип проектирования:
 *      отделите изменяющиеся части программы от постоянных, и объедините их в отдельный аспект
 *      отдавайте предпочтение композиции нежели наследованию
 * Принцип программирования:
 *      программируйте на уровне интерфейса, а не на уровне реализаций
 * ======================================================================
 *
 * В нашем случае разовьем идею интерфейсов для каждого переменного метода. Где каждый интерефейс содержит только один соответствующий абстрактный метод.
 * Наследники данного интерефейса будут реализовывать соответствующий метод по своему.
 * В нашем случае изменяемые методы: Quack и Fly. Поэтому создаем два интерфейса (абстрактных класса) для каждого переменного метода:
 * метод Quack -> класс интерфейса IQuackable, содержащий один абстрактный метод Quack
 * метод Fly -> класс интерфейса IFlyable, содержащий один абстрактный метод Fly
 * на основе этих интерфейсов создаем классы наследники, где каждый класс реализует этот метод по своему:
 * "не крякает"          интерфейс IQuackable -> класс NoQuack
 * "обычное кряканье"    интерфейс IQuackable -> класс SimpleQuack
 * "экзотичное кряканье" интерфейс IQuackable -> класс ExoticQuack
 * "не летает"           интерфейс IFlyable -> класс NoFly
 * "обычный полет"       интерфейс IFlyable -> класс FlyWithWings
 * Далее в базовом классе (DuckBase) создаем приватные объекты по данным интерфейсам: IFlyable *flyBehavior, IQuackable *quackBehavior
 * и инициализируем данные объекты тем классом (их наследника), в котором реализована нужная реализация метода.
 * К примеру в базовом классе реализуем эти методы в виде наиболее распространенных у уток:
 * обычное кряканье: flyBehavior = new SimpleQuack()
 * обычный полет: quackBehavior = new FlyWithWings()
 * далее в базовом классе пишем реализацию методов через интерфейс где данные методы были реализованы:
 * в методе Quack() { quackBehavior->Quack(); }
 * в методе Fly() { flyBehavior->Fly(); }
 * соответственно в производном классе от DuckBase, если нужно переопределить какой то метод, так же создаем приватные объекты интерфейсов
 * где потом внутри метода ссылаемся на соответствующий метод интерфейса
 */

#include <iostream>
#include <list>
#include <memory>

#include "Duck\DuckBase.h"
#include "Duck\ExoticDuck.h"
#include "Duck\SimpleDuck.h"
#include "Duck\WoodenDuck.h"
#include "Duck\RubberDuck.h"
#include "Duck\UpgradableDuck.h"

using namespace std;

int main()
{
    list<shared_ptr<DuckBase>> ducks;

    ducks.push_back(shared_ptr<DuckBase>(new ExoticDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new SimpleDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new WoodenDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new RubberDuck()));

    for (auto const& duck : ducks)
    {
        duck->Display();
        duck->Swim();
        duck->Quack();
        duck->Fly();

        cout << endl;
    }

    UpgradableDuck upgradableDuck;
    upgradableDuck.Display();
    upgradableDuck.Swim();
    upgradableDuck.Quack();
    upgradableDuck.Fly();

    upgradableDuck.SetFlyBehaviour(new FlyWithWings());
    upgradableDuck.SetQuackBehaviour(new ExoticQuack());
    upgradableDuck.Quack();
    upgradableDuck.Fly();

    return 0;
}
