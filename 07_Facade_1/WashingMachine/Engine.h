#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>

using namespace std;

class Engine
{
public:
    void Rotate()
    {
        cout << "Start rotating" << endl;
    }

    void Stop()
    {
        cout << "Stop rotating" << endl;
    }
};

#endif // ENGINE_H
