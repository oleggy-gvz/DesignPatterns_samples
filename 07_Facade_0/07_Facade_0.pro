TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    WashingMachine/Dryer.hpp \
    WashingMachine/Engine.hpp \
    WashingMachine/Thermo.hpp \
    WashingMachine/WaterManagingSubsystem.hpp
