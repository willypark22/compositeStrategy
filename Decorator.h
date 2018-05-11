#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include "component.h"

class Decorator : public Base {
    protected:
        Base* decorated;

    public:
        /* Constructors */
        Decorator();
        Decorator(Base*);
        
        virtual double evaluate() = 0;
};

#endif