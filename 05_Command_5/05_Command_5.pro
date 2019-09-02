TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Commands/ICommand.hpp \
    Commands/LightsCommand.hpp \
    Commands/MusicCommand.hpp \
    Commands/TvCommand.hpp \
    Commands/TeapotCommand.hpp \
    ControlledSystems/Light.hpp \
    ControlledSystems/Music.hpp \
    ControlledSystems/Teapot.hpp \
    RemoteControl.hpp \
    ControlledSystems/Tv.hpp \
    Commands/MacroCommand.hpp
