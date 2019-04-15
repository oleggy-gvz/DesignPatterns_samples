TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp

HEADERS += \
    HomeCats/IHomeCat.h \
    HomeCats/PedigreedCat.h \
    HomeCats/YardCat.h \
    WildCats/IWildCat.h \
    WildCats/Tiger.h \
    CatInfoPrinter.h \
    Adapters/HomeCatAdapter.h
