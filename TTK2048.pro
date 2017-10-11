# =================================================
# * This file is part of the TTK 2048 project
# * Copyright (c) 2017 - 2017 Greedysky Studio
# * All rights reserved!
# * Redistribution and use of the source code or any derivative
# * works are strictly forbiden.
# =================================================

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TTK2048
TEMPLATE = app

msvc{
    CONFIG +=c++11
}else{
    QMAKE_CXXFLAGS += -std=c++11
}

SOURCES += \
        main.cpp \
        ttkapplication.cpp

HEADERS += \
        ttkapplication.h

FORMS += \
        ttkapplication.ui

RESOURCES += \
        TTK2048.qrc
