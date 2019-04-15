#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "Widgets\IObserver.h"

class ISubject
{
public:
    virtual void RegisterObserver(IObserver *observer) = 0;
    virtual void RemoveObserver(IObserver *observer) = 0;
    virtual void NoryfyObservers() = 0;
};

#endif // ISUBJECT_H
