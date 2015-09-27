TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Room.cpp \
    Wall.cpp \
    Door.cpp \
    Mazegame.cpp \
    Maze.cpp \
    Mazefactory.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Direction.h \
    MapSite.h \
    Room.h \
    Wall.h \
    Door.h \
    Mazegame.h \
    Maze.h \
    Mazefactory.h

