TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Car.hpp \
    Factory/CarFactoryBase.hpp \
    Factory/LuxuryCarFactory.hpp \
    Factory/CheapCarFactory.hpp \
    Builder/CarBuilderBase.hpp \
    Builder/AudiBuilder.hpp \
    Builder/VolkswagenBuilder.hpp
