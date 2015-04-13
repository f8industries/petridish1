##-------------------------------------------------
##
## Project created by QtCreator 2015-04-09T16:21:37
##
##-------------------------------------------------

#QT       += core gui

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#TARGET = petridish1
#TEMPLATE = app


#SOURCES += main.cpp\
#        mainwindow.cpp

#HEADERS  += mainwindow.h

#FORMS    += mainwindow.ui

QT       += core gui widgets network

CONFIG	    += console debug
HEADERS	    += ../aqp/kuhn_munkres.hpp \
    cell.h
SOURCES	    += ../aqp/kuhn_munkres.cpp \
    cell.cpp
HEADERS	    += ../aqp/alt_key.hpp
SOURCES	    += ../aqp/alt_key.cpp
HEADERS	    += ../aqp/aqp.hpp
SOURCES	    += ../aqp/aqp.cpp
INCLUDEPATH += ../aqp
HEADERS	    += cell.h
SOURCES	    += cell.cpp
HEADERS	    += mainwindow.h
SOURCES	    += mainwindow.cpp
SOURCES	    += main.cpp
