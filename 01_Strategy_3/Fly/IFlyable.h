#ifndef IFLYABLE_H
#define IFLYABLE_H

class IFlyable
{
public:
    virtual void Fly() = 0;
    virtual ~IFlyable()
    {}
};

#endif // IFLYABLE_H
