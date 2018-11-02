#ifndef __CONCRETE_STATEA_H
#define __CONCRETE_STATEA_H

#include "Context.h"

class ConcreteStateA : public State
{
    public:
        ConcreteStateA();
        ~ConcreteStateA();
        virtual void Handle(Context *pContext);
};

#endif


