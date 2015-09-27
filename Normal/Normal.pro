TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Door.cpp \
    Maze.cpp \
    Mazegame.cpp \
    Room.cpp \
    Wall.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Direction.h \
    Door.h \
    MapSite.h \
    Maze.h \
    Mazegame.h \
    Room.h \
    Wall.h

