#ifndef IQUACKABLE_HPP
#define IQUACKABLE_HPP

class IQuackable
{
public:
    virtual void Quack() = 0;
    virtual ~IQuackable()
    {}
};

#endif // IQUACKABLE_HPP
