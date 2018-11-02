#include "common.h"
#include "ConcreteStateB.h"


ConcreteStateB::ConcreteStateB()
{
}

ConcreteStateB::~ConcreteStateB()
{
}

void ConcreteStateB::Handle(Context *pContext)
{
    cout<<"I am concretestateB"<<endl;
}
