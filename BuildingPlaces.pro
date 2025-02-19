QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    classes/src/connection.cpp \
    main.cpp \
    models/src/build_place.cpp \
    models/src/invoice.cpp \
    models/src/kit.cpp \
    models/src/part.cpp \
    partslistwidget.cpp

HEADERS += \
    classes/include/connection.h \
    models/include/build_place.h \
    models/include/invoice.h \
    models/include/kit.h \
    models/include/part.h \
    partslistwidget.h

FORMS += \
    partslistwidget.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
