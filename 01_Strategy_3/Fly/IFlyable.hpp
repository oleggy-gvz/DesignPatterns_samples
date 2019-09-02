#ifndef IFLYABLE_HPP
#define IFLYABLE_HPP

class IFlyable
{
public:
    virtual void Fly() = 0;
    virtual ~IFlyable()
    {}
};

#endif // IFLYABLE_HPP
