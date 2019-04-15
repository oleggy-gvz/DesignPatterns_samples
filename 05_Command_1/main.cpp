#include <iostream>
#include <map>
#include <memory>

using namespace std;

class ICommand
{
public:
    virtual void Execute() = 0;
};

class LightsCommand : public ICommand
{
public:
    void Execute()
    {
        cout << "Light on" << endl;
    }
};

class TvCommand : public ICommand
{
public:
    void Execute()
    {
        cout << "TV enabled" << endl;
    }
};

class MusicCommand : public ICommand
{
public:
    void Execute()
    {
        cout << "Music is on" << endl;
    }
};

class RemoteControl
{
private:
    map<string, shared_ptr<ICommand>> _commands;

public:
    RemoteControl()
    {
        /*_commands.insert(pair<string, shared_ptr<ICommand>> ("1", shared_ptr<ICommand>(new LightsCommand())));
        _commands.insert(pair<string, shared_ptr<ICommand>> ("2", shared_ptr<ICommand>(new TvCommand())));
        _commands.insert(pair<string, shared_ptr<ICommand>> ("3", shared_ptr<ICommand>(new MusicCommand())));*/
        _commands["1"] = shared_ptr<ICommand>(new LightsCommand());
        _commands["2"] = shared_ptr<ICommand>(new TvCommand());
        _commands["3"] = shared_ptr<ICommand>(new MusicCommand());
    }

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

        // обработка выключения
        if (imput == "1off")
            TurnLightOff();
        else if (imput == "2off")
            TurnTvOff();
        else if (imput == "3off")
            TurnMusicOff();

        // обработка включения
        if (_commands.find(imput) != _commands.end())
            _commands[imput]->Execute();
    }

    void TurnLightOff ()
    {
        cout << "Light off" << endl;
    }

    void TurnTvOff ()
    {
        cout << "TV off" << endl;
    }

    void TurnMusicOff ()
    {
        cout << "Music off" << endl;
    }
};

/*
 * Паттерн Команда заключается именно в объявлении интерфейса команды и объявлении метода Execute, который реализуется в классах наследниках.
 * Избавились от громоздкой конструкции switch, заменив методом из 2-х строк.
 *
 * Проблемы проектирования
 * -----------------------
 * В методе PerformAction обработка команд в двух местах, отдельно для включения и отдельно отключения.
 * Пока класс RemoteControl жестко связан с классами ...Command.
 * Имеем отношение использования одного класса другим классом т.е. работаем на уровне реализации а не интерфейса.
 * Нужно реализовать способ назначения команды на клавиши.
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
    } while (userImput == "y");
}
