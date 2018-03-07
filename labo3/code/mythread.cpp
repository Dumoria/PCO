#include "mythread.h"


MyThread::MyThread(const QString &threadName, QObject *parent) :
    QThread(parent)
{
    setObjectName(threadName);
}
