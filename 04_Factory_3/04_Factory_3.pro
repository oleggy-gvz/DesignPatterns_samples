TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp

HEADERS += \
    Cars/Car.h \
    Cars/GolfCar.h \
    Cars/PassatCar.h \
    Cars/TiguanCar.h \
    Cars/TouaregCar.h \
    Facilities/VolkswagenFacility.h \
    Facilities/DeutschVolkswagenFacility.h \
    Facilities/RussianVolkswagenFacility.h \
    Parts/Engine.h \
    Parts/GasolineEngine.h \
    Parts/DieselEngine.h \
    Parts/Wheels.h \
    Parts/MediumWheels.h \
    Parts/BigWheels.h \
    Parts/Paint.h \
    Parts/BlackPaint.h \
    Parts/WhitePaint.h \
    PartsFactory/CarPartsFactory.h \
    PartsFactory/RussianCarPartsFactory.h \
    PartsFactory/DeutschCarPartsFactory.h
