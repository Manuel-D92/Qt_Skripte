######################################################################
# Automatically generated by qmake (3.1) Tue Apr 13 08:44:59 2021
######################################################################

TEMPLATE = app
TARGET = stringTest
INCLUDEPATH += .

QMAKE_CXXFLAGS += -Wall -Wextra -std=c++17 -lasan -fsanitize=address
QMAKE_LFLAGS += -lasan -fsanitize=address

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
SOURCES += main.cpp \
    mystring.cpp

HEADERS += \
    mystring.h
