TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Widgets/IWidget.h \
    Widgets/LentaWidget.h \
    Widgets/TvWidget.h \
    Widgets/TwitterWidget.h \
    Widgets/IObserver.h \
    News/ISubject.h \
    News/NewsAgregator.h
