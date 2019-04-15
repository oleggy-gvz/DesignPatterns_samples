#ifndef BLACKPAINT_H
#define BLACKPAINT_H

#include "Paint.h"

class BlackPaint : public Paint
{
public:
    BlackPaint()
    {
        cout << "Paint is Black" << endl;
    }
};

#endif // BLACKPAINT_H
