TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Cars/Car.h \
    Cars/DeutschCar.h \
    Cars/RussianCar.h \
    Facilities/VolkswagenFacility.h \
    Facilities/DeutschVolkswagenFacility.h \
    Facilities/RussianVolkswagenFacility.h \
    Cars/DeutschGolf .h \
    Cars/DeutschGolfCar.h \
    Cars/DeutschPassatCar.h \
    Cars/DeutschTiguanCar.h \
    Cars/DeutschTouaregCar.h \
    Cars/RussianGolfCar.h \
    Cars/RussianPassatCar.h \
    Cars/RussianTiguanCar.h \
    Cars/RussianTouaregCar.h
