#include "Singleton.h"

Singleton *Singleton::instance = 0;


Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}

Singleton *Singleton::getInstance()
{
    static Singleton *pCon = new Singleton();

    return pCon;

}

