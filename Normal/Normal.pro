TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    door.cpp \
    maze.cpp \
    mazegame.cpp \
    room.cpp \
    wall.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    direction.h \
    door.h \
    mapsite.h \
    maze.h \
    mazegame.h \
    room.h \
    wall.h

