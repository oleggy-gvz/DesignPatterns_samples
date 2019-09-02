/*
 * ПАТТЕРН "СТРОИТЕЛЬ"
 *
 * Пример:
 * -------
 * Пример похожий на пример из 04_Factory. Но цель другая. Как можно инкапсулировать и отдельно отвести процесс создания машины
 * и отдельно процесс принципа ее создания.
 * Имеем класс Car в котором есть 6 свойств - строк, в котором хранится информация о машине. И метод вывода информации о данной машины.
 * В этом примере используются два паттерна. Фабрика и Строитель.
 * Класс Стоителя:
 * Класс CarBuilderBase это строителя, который отвечает за то как добавить в автомобиль какие то компоненты, и одним за одним мы набираем опции в нашу машину
 * и в итоге получим некий завершенный продукт.
 * В классе содержит только один реализованный метод GetCar возвращающий объект Car и абстрактные методы Build.. которые идентичны по смыслу свойствам
 * перечисленным в классе Car. Т.е. каждый этот метод отвечает за добавление в машину какую либо опцию.
 * При использовании паттерна Строитель мы можем сами регулировать процесс создания того или иного объекта. Т.е. можем построить автомобиль только
 * из тех компонентов которые нам нужны. При паттерне Фабрика, для того что бы изменить процесс создания автомобиля необходимо создать новый класс фабрики.
 *
 * Класс Фабрика:
 * Класс CarFactoryBase имеет указатель на класс CarBuilderBase, который передается ему через конструктор. И единственный абстрактный метод Construct
 * который возвращает объект Car.
 *
 * Комбинация из Фабрики и Строителя получается выгодным решением для конструирования приложений в котором есть потребность по крупицам набирать объекты
 * какого либо характера.
 * Если реализовывать такое только Фабрикой то пришлось манипулировать множеством различных фабрик. А в данном случае фабрика используется лишь для простоты
 * примера.
 *
 */

#include <iostream>
#include "Builder\VolkswagenBuilder.hpp"
#include "Builder\AudiBuilder.hpp"
#include "Factory\CheapCarFactory.hpp"
#include "Factory\LuxuryCarFactory.hpp"

using namespace std;

int main()
{
#ifdef BUILDER // only BUILDER & FACTORY METHOD

    shared_ptr<VolkswagenBuilder> vwBuilder(new VolkswagenBuilder());

    vwBuilder->BuildFrames();
    vwBuilder->BuildEngine();
    vwBuilder->BuildWheels();

    auto car = vwBuilder->GetCar();
    cout << car << endl;

    vwBuilder->BuildMultimedia();
    car = vwBuilder->GetCar();
    cout << car << endl;

    vwBuilder->BuildSafety();
    car = vwBuilder->GetCar();
    cout << car << endl;

#else // only FACTORY METHOD

    cout << "Cheap Volkswagen:" << endl;
    shared_ptr<CarFactoryBase> constructor(new CheapCarFactory(new VolkswagenBuilder()));
    auto car = constructor->Construct();
    cout << car << endl;

    cout << "Luxury Volkswagen:" << endl;
    constructor = shared_ptr<CarFactoryBase>(new LuxuryCarFactory(new VolkswagenBuilder()));
    car = constructor->Construct();
    cout << car << endl;

    cout << "Cheap Audi:" << endl;
    constructor = shared_ptr<CarFactoryBase>(new CheapCarFactory(new AudiBuilder()));
    car = constructor->Construct();
    cout << car << endl;

    cout << "Luxury Audi:" << endl;
    constructor = shared_ptr<CarFactoryBase>(new LuxuryCarFactory(new AudiBuilder()));
    car = constructor->Construct();
    cout << car << endl;

#endif

    return 0;
}
