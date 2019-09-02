#ifndef ISTATE_HPP
#define ISTATE_HPP

#include <memory>

class IState
{
public:
    virtual void FillTank() = 0;
    virtual void TurnKey() = 0;
    virtual void Drive() = 0;
    virtual void Stop() = 0;
};

#endif // ISTATE_HPP
