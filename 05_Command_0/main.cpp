#include <iostream>

using namespace std;

class RemoteControl
{
public:
    void DrawMenu()
    {
        cout << "1 \t - Turn on the light" << endl;
        cout << "1off \t - Turn off the light" << endl;
        cout << "2 \t - Turn on the TV" << endl;
        cout << "2off \t - Turn off the TV" << endl;
        cout << "3 \t - Enable music" << endl;
        cout << "3off \t - Turn off the music" << endl;
        cout << "0 \t - Exit" << endl;
    }

    void PerformAction()
    {
        cout << "Choose an option below: ";
        string imput;

        cin >> imput;

        if (imput == "1")
            TurnLightOn();
        else if (imput == "1off")
            TurnLightOff();
        else if (imput == "2")
            TurnTvOn();
        else if (imput == "2off")
            TurnTvOff();
        else if (imput == "3")
            TurnMusicOn();
        else if (imput == "3off")
            TurnMusicOff();
    }

    void TurnLightOn()
    {
        cout << "Light on" << endl;
    }

    void TurnLightOff ()
    {
        cout << "Light off" << endl;
    }

    void TurnTvOn ()
    {
        cout << "TV enabled" << endl;
    }

    void TurnTvOff ()
    {
        cout << "TV off" << endl;
    }

    void TurnMusicOn ()
    {
        cout << "Music is on" << endl;
    }

    void TurnMusicOff ()
    {
        cout << "Music off" << endl;
    }
};


/*
 * ПАТТЕРН "КОМАНДА"
 * Команда имеется в виду в качестве задачи на выполнение, т.е. некое действие которое д.б. выполнено. Причем реализация этого действия должно быть скрыто от того
 * кто его инициализирует. Т.е. инкапсуляция некото действия внутри команды.
 *
 * Пример:
 * -------
 * Симулятор работы умного пульта ДУ запрограммированного на управление разными системами в умном доме. Цель как можно меньше усилий тратить на разработку этого ПО
 * в случае возникновения каких либо изменений и расширения набора функций.
 *
 *
 * Проблема проектирования:
 * -----------------------
 * Код написанный в методе PerformAction - не масшабируемый. К примеру купили электрочайник и хотим настроить пульт для управления данным чайником. Придется модифицировать
 * код программы что бы добавить данное устройство. Либо при смене действий по кнопкам на пульте.
 *
 */

int main()
{
    RemoteControl remote;
    string userImput;

    do
    {
        remote.DrawMenu();
        remote.PerformAction();

        cout << "Do you want to continue (y/n): ";
        cin >> userImput;
    } while(userImput == "y");
}
