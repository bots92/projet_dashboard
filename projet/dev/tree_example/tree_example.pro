TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    data.cpp \
    main.cpp \
    node.cpp \
    path.cpp \
    treatment.cpp

DISTFILES += \
    tree_example \
    CMakeLists.txt.user \
    tree_example.pro.user \
    CMakeLists.txt \
    Makefile

HEADERS += \
    data.h \
    node.h \
    path.h \
    treatment.h

