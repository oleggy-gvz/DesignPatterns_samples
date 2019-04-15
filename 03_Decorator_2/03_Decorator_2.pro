TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Beverage/BeverageBase.h \
    Beverage/BlackTea.h \
    Beverage/Espresso.h \
    Beverage/GreenTea.h \
    Decorator/CondimentsDecoratorBase.h \
    Beverage/Capuccino.h \
    Decorator/SugarCondiment.h \
    Decorator/MilkCondiment.h \
    Decorator/ChocolateCondiment.h
