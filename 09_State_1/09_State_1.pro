TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Car.h \
    States/IState.h \
    States/FullTankState.h \
    States/EngineStartedState.h \
    States/EmptyTankState.h \
    States/DrivingState.h
