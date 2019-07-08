TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Car.h \
    Factory/CarFactoryBase.h \
    Factory/LuxuryCarFactory.h \
    Factory/CheapCarFactory.h \
    Builder/CarBuilderBase.h \
    Builder/AudiBuilder.h \
    Builder/VolkswagenBuilder.h
