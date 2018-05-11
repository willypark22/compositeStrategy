#ifndef __Abs_H__
#define __Abs_H__
#include "Decorator.h"
#include "component.h"

class Abs : public Decorator {
    public:
        Abs();
        Abs(Base*);
        double evaluate();
};
#endif