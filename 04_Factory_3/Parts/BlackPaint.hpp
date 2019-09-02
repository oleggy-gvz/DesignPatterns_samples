#ifndef BLACKPAINT_HPP
#define BLACKPAINT_HPP

#include "Paint.hpp"

class BlackPaint : public Paint
{
public:
    BlackPaint()
    {
        cout << "Paint is Black" << endl;
    }
};

#endif // BLACKPAINT_HPP
