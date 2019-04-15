#ifndef ICOMMAND_H
#define ICOMMAND_H

#include <iostream>
#include <string>

enum class State {Off = 0, On = 1};

using namespace std;

class ICommand
{
public:
    virtual void Execute() = 0;
    virtual void Undo() = 0;
    virtual ostream& stream_out(ostream& out) const = 0;
};

// переопределяем оператор << для объектов-наследников ICommand
ostream & operator<<(ostream & out, ICommand const & ic)
{
    return ic.stream_out(out);
}

#endif // ICOMMAND_H
