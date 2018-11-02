#ifndef __STATE_H
#define __STATE_H

class Context;

/*抽象状态类:定义一个接口以封装与Context的一个特定状态相关的行为*/
class State
{
    public:
        State();
        ~State();
        virtual void Handle(Context *pContext) = 0;
};

#endif

