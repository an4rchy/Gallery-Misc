#-------------------------------------------------
#
# Project created by QtCreator 2012-04-05T00:46:59
#
#-------------------------------------------------

QT       += core gui

TARGET = Gallery
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    CPictureFlowWidget.cpp \
    CPicFlowWidget.cpp \
    CPicScrollWidget.cpp \
    CScrollWidget.cpp

HEADERS  += dialog.h \
    ui_CScrollWidget.hpp \
    ui_CPicScrollWidget.hpp \
    ui_CPicFlowWidget.hpp \
    CScrollWidget.hpp \
    CPictureFlowWidget.hpp \
    CPicScrollWidget.hpp \
    CPicFlowWidget.hpp \
    ui_dialog.hpp

FORMS    += dialog.ui

RESOURCES = UiImgResources.qrc
