#include <iostream>
#include <string>

#include "Commands\LightsCommand.h"
#include "Commands\TvCommand.h"
#include "Commands\MusicCommand.h"
#include "Commands\TeapotCommand.h"
#include "ControlledSystems\Light.h"
#include "ControlledSystems\Music.h"
#include "ControlledSystems\Teapot.h"
#include "ControlledSystems\Tv.h"
#include "RemoteControl.h"

using namespace std;

/*
 *
 * Проблемы проектирования
 * -----------------------
 * Необходимо создать макро команды.
 */

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
