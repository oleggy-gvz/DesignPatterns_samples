TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Factory/SimpleFactory.hpp \
    Cars/Golf.hpp \
    Cars/Car.hpp \
    Cars/Passat.hpp \
    Cars/Tiguan.hpp \
    Cars/Touareg.hpp \
    Facilities/VolkswagenFacility.hpp
