TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    enchantedmazefactory.cpp \
    door.cpp \
    maze.cpp \
    mazefactory.cpp \
    mazegame.cpp \
    room.cpp \
    wall.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    enchantedmazefactory.h \
    direction.h \
    door.h \
    mapsite.h \
    maze.h \
    mazefactory.h \
    mazegame.h \
    room.h \
    wall.h

