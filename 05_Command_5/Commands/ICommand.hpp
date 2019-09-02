#ifndef ICOMMAND_HPP
#define ICOMMAND_HPP

#include <iostream>
#include <string>

using namespace std;

enum class State {Off = 0, On = 1};

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

#endif // ICOMMAND_HPP
