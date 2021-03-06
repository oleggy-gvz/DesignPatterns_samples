#ifndef AUDI_BUILDER_HPP
#define AUDI_BUILDER_HPP

#include "CarBuilderBase.hpp"

class AudiBuilder : public CarBuilderBase
{
public:
    AudiBuilder()
    {}

    void BuildMultimedia()
    {
        car->Multimedia = "Audi MMI Multimedia";
    }

    void BuildWheels()
    {
        car->Wheels += " 18\" Audi Wheel";
    }

    void BuildEngine()
    {
        car->Engine = "2.0 TFSI";
    }

    void BuildFrames()
    {
        car->Frame = "Audi frame";
    }

    void BuildLuxury()
    {
        car->Luxury = "Audi Exclusive Interior";
    }

    void BuildSafety()
    {
        car->Safety = "Side Assist";
    }
};

#endif // AUDI_BUILDER_HPP
