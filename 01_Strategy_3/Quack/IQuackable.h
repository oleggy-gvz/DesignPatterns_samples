#ifndef IQUACKABLE_H
#define IQUACKABLE_H

class IQuackable
{
public:
    virtual void Quack() = 0;
    virtual ~IQuackable()
    {}
};

#endif // IQUACKABLE_H
