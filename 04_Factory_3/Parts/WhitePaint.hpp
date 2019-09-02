#ifndef WHITEPAINT_HPP
#define WHITEPAINT_HPP

#include "Paint.hpp"

class WhitePaint : public Paint
{
public:
    WhitePaint()
    {
        cout << "Paint is White" << endl;
    }
};

#endif // WHITEPAINT_HPP
