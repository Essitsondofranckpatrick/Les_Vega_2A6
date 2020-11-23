QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    affichage.cpp \
    affichage_ch.cpp \
    chambre.cpp \
    connection.cpp \
    dialog.cpp \
    evenement.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    affichage.h \
    affichage_ch.h \
    chambre.h \
    connection.h \
    dialog.h \
    evenement.h \
    mainwindow.h

FORMS += \
    affichage.ui \
    affichage_ch.ui \
    dialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
