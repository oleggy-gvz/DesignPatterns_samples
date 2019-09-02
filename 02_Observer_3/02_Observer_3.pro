TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Widgets/IWidget.hpp \
    Widgets/LentaWidget.hpp \
    Widgets/TvWidget.hpp \
    Widgets/TwitterWidget.hpp \
    Widgets/IObserver.hpp \
    News/ISubject.hpp \
    News/NewsAgregator.hpp
