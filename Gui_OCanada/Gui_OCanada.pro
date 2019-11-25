QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    analizador/analizer.cpp \
    analizador/ast.cpp \
    analizador/calculator.cpp \
    analizador/parser.cpp \
    analizador/scanner.cpp \
    analizador/token.cpp \
    biseccion.cpp \
    busqueda_incremental.cpp \
    cholsky.cpp \
    crout.cpp \
    doolittle.cpp \
    eliminacion_gaussiana.cpp \
    main.cpp \
    mainwindow.cpp \
    menu_cholesky.cpp \
    menu_crout.cpp \
    metodos_abiertos.cpp \
    metodos_cerrados.cpp \
    metodos_factorizacion.cpp \
    metodos_interpolacion.cpp \
    metodos_iterativos.cpp \
    newton.cpp \
    pivote_total.cpp \
    pivote_parcial.cpp \
    punto_fijo.cpp \
    raizes_multiples.cpp \
    regla_falsa.cpp \
    secante.cpp \
    seidel.cpp \
    simple.cpp

HEADERS += \
    analizador/analizer.h \
    analizador/ast.h \
    analizador/calcex.h \
    analizador/calculator.h \
    analizador/parser.h \
    analizador/scanner.h \
    analizador/token.h \
    biseccion.h \
    busqueda_incremental.h \
    cholsky.h \
    crout.h \
    doolittle.h \
    eliminacion_gaussiana.h \
    mainwindow.h \
    menu_cholesky.h \
    menu_crout.h \
    metodos_abiertos.h \
    metodos_cerrados.h \
    metodos_factorizacion.h \
    metodos_interpolacion.h \
    metodos_iterativos.h \
    newton.h \
    pivote_total.h \
    pivote_parcial.h \
    punto_fijo.h \
    raizes_multiples.h \
    regla_falsa.h \
    secante.h \
    seidel.h \
    simple.h

FORMS += \
    biseccion.ui \
    busqueda_incremental.ui \
    cholsky.ui \
    crout.ui \
    doolittle.ui \
    eliminacion_gaussiana.ui \
    mainwindow.ui \
    menu_cholesky.ui \
    menu_crout.ui \
    metodos_abiertos.ui \
    metodos_cerrados.ui \
    metodos_factorizacion.ui \
    metodos_interpolacion.ui \
    metodos_iterativos.ui \
    newton.ui \
    pivote_total.ui \
    pivote_parcial.ui \
    punto_fijo.ui \
    raizes_multiples.ui \
    regla_falsa.ui \
    secante.ui \
    seidel.ui \
    simple.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
