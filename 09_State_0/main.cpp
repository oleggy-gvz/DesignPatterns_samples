/*
 * ПАТТЕРН "СОСТОЯНИЕ"
 *
 *
 * Пример:
 * -------
 * Процесс управления автомобилем. Делится на 4 состояния:
 * 1. Бензина нет.
 *      1->2: Налить бензин.
 * 2. Бензин есть.
 *      2->3: Повернуть ключ.
 * 3. Мотор запущен.
 *      3->4: Поехать.
 * 4. Машина едет.
 *      4->3: Остановится.
 * Создаем 4-е метода: Полный бак (FillTank). Повернуть ключ (TurnKey). Поехали (Drive). Остановка (Stop). Проверка поездки (TryDrive).
 * В каждом методе происходит проверка текущего статуса, и в зависимости от текущего статуса машины и вызванного метода выполняется какие либо действия.
 *
 * Проблема проектирования:
 * -----------------------
 * Все 4-х метода выполняют разные вещи, но они похожи. Во всех методах есть перебор всех состояний, вывод сообщения об ошибке или перевод в следующее
 * состояние. Недостаток в том что если будет добавлено новое состояния то придется менять логику состояний во всех методах.
 * Нужно как можно чаще выносить логику в другие иерархии.
 *
 */
#include <iostream>
#include <memory>

using namespace std;

class Car
{
    enum class CarState
    {
        EmptyTank,
        FullTank,
        EngineStarted,
        Driving
    };
    int _gasoline = 0;
    CarState _state = CarState::EmptyTank;

public:
    void FillTank()
    {
        if (_state == CarState::EmptyTank)
        {
            _gasoline = 70;
            _state = CarState::FullTank;
            cout << "Now tank is full." << endl;
        }
        else if (_state == CarState::FullTank)
        {
            cout << "Tank is already full." << endl;
        }
        else if (_state == CarState::EngineStarted)
        {
            cout << "Can not refuel with a running engine." << endl;
        }
        else if (_state == CarState::Driving)
        {
            cout << "Crazy! Can not refuel on the go." << endl;
        }
    }

    void TurnKey()
    {
        if (_state == CarState::EmptyTank)
        {
            cout << "Without gasoline not start." << endl;
        }
        else if (_state == CarState::FullTank)
        {
            _state = CarState::EngineStarted;
            cout << "Engine starting..." << endl;
        }
        else if (_state == CarState::EngineStarted)
        {
            _state = CarState::FullTank;
            cout << "Stop." << endl;
        }
        else if (_state == CarState::Driving)
        {
            cout << "On the go do not touch the key" << endl;
        }
    }

    void Drive()
    {
        if (_state == CarState::EmptyTank)
        {
            cout << "How do we go without gasoline? In no way." << endl;
        }
        else if (_state == CarState::FullTank)
        {
            _state = CarState::EngineStarted;
            cout << "Start the engine first." << endl;
        }
        else if (_state == CarState::EngineStarted)
        {
            _state = CarState::Driving;
            TryDrive();
        }
        else if (_state == CarState::Driving)
        {
            TryDrive();
        }
    }

    void Stop()
    {
        if (_state == CarState::EmptyTank)
        {
            cout << "Without gasoline and so we stand." << endl;
        }
        else if (_state == CarState::FullTank)
        {
            cout << "I'm already stopped." << endl;
        }
        else if (_state == CarState::EngineStarted)
        {
            cout << "I'm already stopped." << endl;
        }
        else if (_state == CarState::Driving)
        {
            _state = CarState::EngineStarted;
            cout << "Enough driving? Stand..." << endl;
        }
    }

private:
    void TryDrive()
    {
        if (_gasoline > 0)
        {
            cout << "Go!" << endl;
            _gasoline -= 10;
        }
        else
        {
            cout << "Stop. Gasoline is over." << endl;
            _state = CarState::EmptyTank;
        }
    }
};

int main()
{
    shared_ptr<Car> car(new Car());
    car->FillTank();
    car->TurnKey();
    car->TurnKey();
    car->TurnKey();
    car->Drive();
    car->Stop();

    system("pause");
    return 0;
}
