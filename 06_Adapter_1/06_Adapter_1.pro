TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp

HEADERS += \
    HomeCats/IHomeCat.hpp \
    HomeCats/PedigreedCat.hpp \
    HomeCats/YardCat.hpp \
    WildCats/IWildCat.hpp \
    WildCats/Tiger.hpp \
    CatInfoPrinter.hpp \
    Adapters/HomeCatAdapter.hpp
