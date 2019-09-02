/*
 *
 * Проблемы проектирования
 * -----------------------
 * Необходимо создать макро команды.
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
        remote.PushButton(buttonId);
        remote.PushButton(buttonId);
        remote.PushButton(buttonId);
        remote.UndoButton(buttonId);
        remote.UndoButton(buttonId);
        remote.UndoButton(buttonId);
        remote.UndoButton(buttonId);
        remote.UndoButton(buttonId);

        cout << "Do you want to continue (y/n): ";
        cin >> userImput;
    } while (userImput == "y");
}
