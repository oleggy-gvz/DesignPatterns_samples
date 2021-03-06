/*
 * ПАТТЕРН "ШАБЛОННЫЙ МЕТОД"
 *
 * Создаем еще один метод, которые возвращает булево значение true/false в зависимости от того что нужно выполнить. Либо продолжить выполнение или
 * не продолжать. Этот метод будет виртуальным.
 * И добавим проверку этого метода CustomerWantsTopings() в алгоритме готовки Prepare().
 * Далее в каждом накледуемом классе (в котором хотим реализовать данный опрос) переопределяем данный метод? внутри которого можем добавить запро от
 * пользователя или еще что нибудь.
 *
 *
 * СФЕРА ПРИМЕНЕНИЯ
 * ----------------
 * Сфера применения данного паттерна в том, что если нам нужно унифицировать некий алгоритм, некую последовательность действий в виде жестко зашитого
 * алгоритма при этом мы хотим возможность расширять/дополнять наше поведение с помошью классов наследников. И конкретно задавать конкретные шаги но
 * не модифицировать сам алгоритм.
 *
 * В какой то степени со схож со стратегией. Т.к. они оба выполняют одну и ту же функцию позволяя кастмизировать некий алгоритм.
 * Но стратегия основана на композиции классов. И позволяла полностью изменить весь алгоритм который мы хотим реализовать (в тот или иной момент выполнения
 * программы).
 * То шаблонный метод сохраняет "костяк" алгоритма, ту последовательность которая должна быть выполнена, но при этом он позволяет переопределять некие шаги
 * с помощью наследования а не помозиции и позволяет делать довольно гибко. Не изменяе код основного приложения мы смогли добится взаимозяменяемости
 * и переопределяемости неких алгоритмов в процессе выполнения данного приложения.
 *
 */

#include <iostream>
#include <memory>
#include "Food\Hamburger.hpp"
#include "Food\HotDog.hpp"

int main()
{
    shared_ptr<HotDog> hotDog(new HotDog());
    shared_ptr<Hamburger> hamburger(new Hamburger());

    cout << "HotDog:" << endl;
    hotDog->Prepare();
    cout << endl;

    cout << "Hamburger:" << endl;
    hamburger->Prepare();
    cout << endl;

    return 0;
}
