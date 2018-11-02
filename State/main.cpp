#include "Context.h"
#include "common.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"


int main()
{
    State *pStateA = new ConcreteStateA();//初始化两个具体状态类对象
    State *pStateB = new ConcreteStateB();
    Context *pContext = new Context(pStateA); //将具体状态类对象交由Context类管理
    pContext->Request();//Context类根据对象状态，调用该对象的特定函数Request
    pContext->ChangeState(pStateB); //改变对象状态
    pContext->Request();

    SAFE_DELETE(pContext);
    SAFE_DELETE(pStateB);
    SAFE_DELETE(pStateA);
    return 0;
}

