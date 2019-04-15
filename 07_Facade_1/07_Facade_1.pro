TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    WashingMachine/Dryer.h \
    WashingMachine/Engine.h \
    WashingMachine/Thermo.h \
    WashingMachine/WaterManagingSubsystem.h \
    WashingMachine/WashingMachine.h
