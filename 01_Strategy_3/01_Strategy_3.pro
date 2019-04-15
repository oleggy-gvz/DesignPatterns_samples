TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \

HEADERS += \
    Duck/ExoticDuck.h \
    Duck/SimpleDuck.h \
    Duck/WoodenDuck.h \
    Duck/DuckBase.h \
    Duck/RubberDuck.h \
    Duck/UpgradableDuck.h \
    Fly/IFlyable.h \
    Fly/FlyWithWings.h \
    Fly/NoFly.h \
    Quack/IQuackable.h \
    Quack/SimpleQuack.h \
    Quack/NoQuack.h \
    Quack/ExoticQuack.h