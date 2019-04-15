TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Factory/SimpleFactory.h \
    Cars/Golf.h \
    Cars/Car.h \
    Cars/Passat.h \
    Cars/Tiguan.h \
    Cars/Touareg.h \
    Facilities/VolkswagenFacility.h
