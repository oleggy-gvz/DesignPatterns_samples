#ifndef IWIDGET_H
#define IWIDGET_H

#include <string>
#include <iostream>

using namespace std;

class IObserver
{
public:
    virtual void Update(string &twitter, string &lenta, string &tv) = 0;
    virtual void Display() = 0;
};


#endif // IWIDGET_H
