TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \

HEADERS += \
    Duck/ExoticDuck.hpp \
    Duck/SimpleDuck.hpp \
    Duck/WoodenDuck.hpp \
    Duck/DuckBase.hpp \
    Duck/RubberDuck.hpp \
    Duck/UpgradableDuck.hpp \
    Fly/IFlyable.hpp \
    Fly/FlyWithWings.hpp \
    Fly/NoFly.hpp \
    Quack/IQuackable.hpp \
    Quack/SimpleQuack.hpp \
    Quack/NoQuack.hpp \
    Quack/ExoticQuack.hpp