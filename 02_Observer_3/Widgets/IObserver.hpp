#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

#include <string>
#include <iostream>
#include <memory>

using namespace std;

class IObserver
{
public:
    virtual void Update() = 0;
    virtual void RemoveFromSubject() = 0;
};

#endif // IOBSERVER_HPP
