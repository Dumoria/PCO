#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread {

private:

public:

    /**
     * \brief MyThread Constructeur simple
     * \param paramNbIterations Nombre d'itérations à effectuer
     * \param threadName Nom du thread. Utile pour le debug
     * \param parent Objet parent du thread
     */
    explicit MyThread(const QString &threadName, QObject *parent = 0);


};


#endif // MYTHREAD_H
