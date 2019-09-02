/*
 * Переопределим метод у каждого класса.
 * Класс RemoteControl ничего не знает чем он управляет, как он управляет и что происходит в тот момент когда он нажимает на кнопку. Он зависит только от интерфейса
 * ICommand и больше не от чего. В итоге получили слабую связанность между нашими подсистемами - пультом и теми устройствами которыми он управляет.
 *
 * ПАТТЕРН КОМАНДА
 * ---------------
 * Паттерн команда инкапсулирует запрос в виде объекта, позволяя параметризировать клиентские запросы другими объектами, с возможностью отмены операций и поддержкой
 * состояния.
 *
 * Состоит из Client, Receiver, ConcreteCommand, Invoker, ICommand.
 * Client это main(), Receiver это выкл./вкл. света. ConcreteCommand это лишь посредник который посылает запрос - вкл./выкл. свет. ICommand - это интерфейс.
 * Invoker - класс который вызывет команды (RemoteControl).
 *
 * Проблемы проектирования
 * -----------------------
 * В нашем случае создана упрощенная версия команды, которая сама выполняет действия (вкл./выкл.).
 *
 */

#include <iostream>
#include <string>
#include <map>
#include <memory>

using namespace std;

class ICommand
{
public:
    virtual void Execute() = 0;
    virtual ostream& stream_out(ostream& out) const = 0;
};

// переопределяем оператор << для объектов-наследников ICommand
ostream & operator<<(ostream & out, const ICommand &ic)
{
    return ic.stream_out(out);
}

class LightsCommand : public ICommand
{
public:
    void Execute()
    {
        cout << "Light on" << endl;
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the light";
        return out;
    }
};

class TvCommand : public ICommand
{
public:
    void Execute()
    {
        cout << "Switch on TV" << endl;
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the TV";
        return out;
    }
};

class TeapotCommand : public ICommand
{
public:
    void Execute()
    {
        cout << "Teapot on" << endl;
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the teapot";
        return out;
    }
};

class MusicCommand : public ICommand
{
public:
    void Execute()
    {
        cout << "Music on" << endl;
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the music";
        return out;
    }
};

class RemoteControl
{
private:
    map<string, shared_ptr<ICommand>> _commands;

public:
    void DrawMenu()
    {
        for (auto it = _commands.begin(); it != _commands.end(); ++it)
            cout << it->first << " \t - " << *(it->second) << endl;
        cout << "0 \t - Exit" << endl;
    }

    void PerformAction()
    {
        cout << "Choose an option below: ";
        string imput;

        cin >> imput;
        if (_commands.find(imput) != _commands.end())
            _commands[imput]->Execute();
    }

    void SetCommandOnButton(string buttonId, ICommand *cmd)
    {
        _commands[buttonId] = shared_ptr<ICommand>(cmd);
    }
};

int main()
{
    RemoteControl remote;
    string userImput;

    remote.SetCommandOnButton("1", new LightsCommand());
    remote.SetCommandOnButton("2", new TvCommand());
    remote.SetCommandOnButton("3", new MusicCommand());
    remote.SetCommandOnButton("4", new TeapotCommand());

    do
    {
        remote.DrawMenu();
        remote.PerformAction();

        cout << "Do you want to continue (y/n): ";
        cin >> userImput;
    } while (userImput == "y");
}
