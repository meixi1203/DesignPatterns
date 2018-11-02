#include "Context.h"

Context::Context(State *pState) : m_pState(pState)
{
}

Context::~Context()
{
}

void Context::Request()
{
    if (m_pState)
    {
        m_pState->Handle(this);
    }
}

void Context::ChangeState(State *pState)
{
    m_pState = pState;
}
