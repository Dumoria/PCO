QT += widgets

HEADERS       = mandelbrotwidget.h \
                renderthread.h \
    mythread.h
SOURCES       = main.cpp \
                mandelbrotwidget.cpp \
                renderthread.cpp \
    mythread.cpp

unix:!mac:!vxworks:!integrity:LIBS += -lm

# install
target.path = $$[QT_INSTALL_EXAMPLES]/threads/mandelbrot
INSTALLS += target
