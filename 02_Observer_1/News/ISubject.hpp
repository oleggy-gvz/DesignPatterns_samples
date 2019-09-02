#ifndef ISUBJECT_HPP
#define ISUBJECT_HPP

#include "Widgets\IObserver.hpp"

class ISubject
{
public:
    virtual void RegisterObserver(IObserver *observer) = 0;
    virtual void RemoveObserver(IObserver *observer) = 0;
    virtual void NoryfyObservers() = 0;
};

#endif // ISUBJECT_HPP
