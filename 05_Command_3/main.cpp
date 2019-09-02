/*
 * Выделяем Receiver в отдельные классы Light, Music, Teapot, Tv. Т.е. работает с той подсистемой с которой он должен работать.
 * По хорошему классы Light, Music, Teapot, TV имеют одинаковые методы TurnOn(), TurnOff() и их лучше наследовать от одного метода.
 * Реализована отмена команды. Метод Undo() в классе ICommand().
 *
 * Проблемы проектирования
 * -----------------------
 * В реализации рассматривается только два состояния - Включить/выключить. Надо реализовать возможность реализации множества комант и способы их отмены
 * в обратную сторону. Например для Света разные уровни яркости. Повторное нажатие - увеличивает уровень яркости. Отмена - наоборот, уменьшает.
 *
 */

#include <iostream>
#include <string>

#include "Commands\LightsCommand.hpp"
#include "Commands\TvCommand.hpp"
#include "Commands\MusicCommand.hpp"
#include "Commands\TeapotCommand.hpp"
#include "ControlledSystems\Light.hpp"
#include "ControlledSystems\Music.hpp"
#include "ControlledSystems\Teapot.hpp"
#include "ControlledSystems\Tv.hpp"
#include "RemoteControl.hpp"

using namespace std;

int main()
{
    RemoteControl remote;
    string userImput;
    int buttonId;

    remote.SetCommandOnButton(1, new LightsCommand(new Light()));
    remote.SetCommandOnButton(2, new MusicCommand(new Music()));
    remote.SetCommandOnButton(3, new TvCommand(new Tv()));
    remote.SetCommandOnButton(4, new TeapotCommand(new Teapot()));

    do
    {
        cout << "Choose an option below: " << endl;
        cout << remote;

        cout << "Your choice: ";
        cin >> buttonId;

        remote.PushButton(buttonId);
        remote.UndoButton(buttonId);

        cout << "Do you want to continue (y/n): ";
        cin >> userImput;
    } while (userImput == "y");
}
