#ifndef __CONTEXT_H
#define __CONTEXT_H

#include "State.h"

/*Context类，维护一个ConcreteState子类的实例，这个实例定义当前的状态*/
class Context
{
public:
    Context(State *pState);
    ~Context();
    void Request();
    void ChangeState(State *pState);

private:
     State *m_pState; //这里的State指针是实现特定状态相关的关键
};

#endif

