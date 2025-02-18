QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    models/src/build_place.cpp \
    models/src/invoice.cpp \
    models/src/kit.cpp \
    models/src/part.cpp \
    partslistwidget.cpp

HEADERS += \
    models/include/build_place.h \
    models/include/invoice.h \
    models/include/kit.h \
    models/include/part.h \
    partslistwidget.h

FORMS += \
    partslistwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
