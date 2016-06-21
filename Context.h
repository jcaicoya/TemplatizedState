#ifndef CONTEXT_H
#define CONTEXT_H

#include "TState.h"

#include <string>



class Context
{
    public:
        enum STATE {NORMAL, UPPER, LOWER};

        Context();

        Context::STATE currentStateType() const;
        void switchState(STATE state);
        void print(const std::string &str);

    private:
        STATE _currentStateType;
};


#endif // CONTEXT_H
