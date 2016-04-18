#-------------------------------------------------
#
# Project created by QtCreator 2013-12-06T17:58:45
#
#-------------------------------------------------

QT       += core gui

TARGET = kolejnyTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


#LIBS += "C:\Users\Lukas\Desktop\EiT\Semestr 9 UAH\Audio\TEST\TEST 4\kolejnyTest-build-desktop-Qt_4_8_1_for_Desktop_-_MSVC2010__Qt_SDK__Release\release\libirrKlang.a"
LIBS += "C:\Users\Lukas\Desktop\EiT\Semestr 9 UAH\Audio\TEST\TEST 4\kolejnyTest-build-desktop-Qt_4_8_1_for_Desktop_-_MSVC2010__Qt_SDK__Release\release\irrKlang.lib"
#win32:LIBS += D:\libirrKlang.a

##symbian: LIBS += -lirrKlang
##else:unix|win32: LIBS += -LD:/ -lirrKlang

##win32: PRE_TARGETDEPS += D:/irrKlang.lib
##else:unix:!symbian: PRE_TARGETDEPS += D:/libirrKlang.a

#win32: LIBS += -LD:/ -lirrKlang

#INCLUDEPATH += $$PWD/../../../Final/irrKlang-1.4.0/include
#DEPENDPATH += $$PWD/../../../Final/irrKlang-1.4.0/include

#win32: PRE_TARGETDEPS += D:/irrKlang.lib
