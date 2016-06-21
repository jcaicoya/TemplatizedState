

#include "Context.h"

#include "TState.h"


Context::Context() : _currentStateType(Context::NORMAL)
{}


void Context::switchState(Context::STATE state)
{
   _currentStateType = state;
}


void Context::print(const std::string &str)
{
   if(_currentStateType == Context::UPPER)
   {
       TState<A>().print(str);
   }
   else if(_currentStateType == Context::LOWER)
   {
       TState<B>().print(str);
   }
   else
   {
       TState<C>().print(str);
   }
}
