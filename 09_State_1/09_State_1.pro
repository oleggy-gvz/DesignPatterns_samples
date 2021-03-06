TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    Car.cpp \
    States/DrivingState.cpp \
    States/EmptyTankState.cpp \
    States/EngineStartedState.cpp \
    States/FullTankState.cpp

HEADERS += \
    Car.hpp \
    States/IState.hpp \
    States/FullTankState.hpp \
    States/EngineStartedState.hpp \
    States/EmptyTankState.hpp \
    States/DrivingState.hpp
