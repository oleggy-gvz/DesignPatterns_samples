TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Cars/Car.hpp \
    Cars/DeutschCar.hpp \
    Cars/RussianCar.hpp \
    Facilities/VolkswagenFacility.hpp \
    Facilities/DeutschVolkswagenFacility.hpp \
    Facilities/RussianVolkswagenFacility.hpp \
    Cars/DeutschGolf .hpp \
    Cars/DeutschGolfCar.hpp \
    Cars/DeutschPassatCar.hpp \
    Cars/DeutschTiguanCar.hpp \
    Cars/DeutschTouaregCar.hpp \
    Cars/RussianGolfCar.hpp \
    Cars/RussianPassatCar.hpp \
    Cars/RussianTiguanCar.hpp \
    Cars/RussianTouaregCar.hpp
