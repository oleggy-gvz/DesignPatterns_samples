TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Commands/ICommand.h \
    Commands/LightsCommand.h \
    Commands/MusicCommand.h \
    Commands/TvCommand.h \
    Commands/TeapotCommand.h \
    ControlledSystems/Light.h \
    ControlledSystems/Music.h \
    ControlledSystems/Teapot.h \
    RemoteControl.h \
    ControlledSystems/Tv.h
