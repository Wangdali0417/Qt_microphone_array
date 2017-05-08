QT += charts multimedia

HEADERS += \
    widget.h \
    ftdi.h \
    global.h \
    lowpassfilterparam.h \
    worker.h \
    dll2xx/ftd2xx.h

SOURCES += \
    widget.cpp \
    ftdi.cpp \
    global.cpp \
    main.cpp \
    worker.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/charts/audio
INSTALLS += target

unix|win32: LIBS += -L$$PWD/dll2xx/ -lftd2xx

INCLUDEPATH += $$PWD/dll2xx
DEPENDPATH += $$PWD/dll2xx
