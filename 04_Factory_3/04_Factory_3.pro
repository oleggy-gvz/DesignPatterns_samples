TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp

HEADERS += \
    Cars/Car.hpp \
    Cars/GolfCar.hpp \
    Cars/PassatCar.hpp \
    Cars/TiguanCar.hpp \
    Cars/TouaregCar.hpp \
    Facilities/VolkswagenFacility.hpp \
    Facilities/DeutschVolkswagenFacility.hpp \
    Facilities/RussianVolkswagenFacility.hpp \
    Parts/Engine.hpp \
    Parts/GasolineEngine.hpp \
    Parts/DieselEngine.hpp \
    Parts/Wheels.hpp \
    Parts/MediumWheels.hpp \
    Parts/BigWheels.hpp \
    Parts/Paint.hpp \
    Parts/BlackPaint.hpp \
    Parts/WhitePaint.hpp \
    PartsFactory/CarPartsFactory.hpp \
    PartsFactory/RussianCarPartsFactory.hpp \
    PartsFactory/DeutschCarPartsFactory.hpp
