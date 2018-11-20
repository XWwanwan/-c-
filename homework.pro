QT += core
QT -= gui

CONFIG += c++11

TARGET = homework
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    invoice.cpp

HEADERS += \
    invoice.h
