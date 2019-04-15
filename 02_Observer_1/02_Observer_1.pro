TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Widgets/IObserver.h \
    Widgets/LentaWidget.h \
    Widgets/TvWidget.h \
    Widgets/TwitterWidget.h \
    News/ISubject.h \
    News/NewsAgregator.h
