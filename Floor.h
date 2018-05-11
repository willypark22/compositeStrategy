#ifndef __FLOOR_H__
#define __FLOOR_H__
#include "Decorator.h"
#include "component.h"

class Floor : public Decorator {
    public:
        Floor();
        Floor(Base*);
        double evaluate();
};
#endif