#ifndef ICOMMAND_H
#define ICOMMAND_H

#include <iostream>
#include <string>

using namespace std;

enum class State {Off = 0, On = 1};
enum class LightsState {Off = 0, Low = 1, Medium = 2, High = 3};

class ICommand
{
public:
    virtual void Execute() = 0;
    virtual void Undo() = 0;
    virtual ostream& stream_out(ostream &out) const = 0;
};

// переопределяем оператор << для объектов-наследников ICommand
ostream & operator<<(ostream & out, const ICommand &ic)
{
    return ic.stream_out(out);
}

#endif // ICOMMAND_H
