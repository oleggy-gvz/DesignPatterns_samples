#ifndef WHITEPAINT_H
#define WHITEPAINT_H

#include "Paint.h"

class WhitePaint : public Paint
{
public:
    WhitePaint()
    {
        cout << "Paint is White" << endl;
    }
};

#endif // WHITEPAINT_H
