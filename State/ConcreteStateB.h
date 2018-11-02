#ifndef __CONCRETE_STATEB_H
#define __CONCRETE_STATEB_H

#include "Context.h"

class ConcreteStateB : public State
{
    public:
        ConcreteStateB();
        ~ConcreteStateB();
        virtual void Handle(Context *pContext);
};

#endif


