#include "common.h"
#include "ConcreteStateA.h"

ConcreteStateA::ConcreteStateA()
{
}

ConcreteStateA::~ConcreteStateA()
{
}

void ConcreteStateA::Handle(Context *pContext)
{
    cout<<"I am concretestateA"<<endl;
}
