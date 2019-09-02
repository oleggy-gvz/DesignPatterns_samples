#ifndef VOLKSWAGEN_BUILDER_HPP
#define VOLKSWAGEN_BUILDER_HPP

#include "CarBuilderBase.hpp"

class VolkswagenBuilder : public CarBuilderBase
{
public:
    VolkswagenBuilder()
    {}

    void BuildMultimedia()
    {
        car->Multimedia = "VW RNS 510";
    }

    void BuildWheels()
    {
        car->Wheels += " 17\" VW Wheel";
    }

    void BuildEngine()
    {
        car->Engine = "1.8 TSI";
    }

    void BuildFrames()
    {
        car->Frame = "VW frame";
    }

    void BuildLuxury()
    {
        car->Luxury = "VW R-style";
    }

    void BuildSafety()
    {
        car->Safety = "VW Lane Assist";
    }
};

#endif // VOLKSWAGEN_BUILDER_HPP
