TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Beverage/BeverageBase.hpp \
    Beverage/BlackTea.hpp \
    Beverage/Espresso.hpp \
    Beverage/GreenTea.hpp \
    Decorator/CondimentsDecoratorBase.hpp \
    Beverage/Capuccino.hpp \
    Decorator/SugarCondiment.hpp \
    Decorator/MilkCondiment.hpp \
    Decorator/ChocolateCondiment.hpp
