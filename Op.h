#ifndef __OP_H__
#define __OP_H__
#include "component.h"

class Op : public Base {
    private:
        double value;
        
    public:
        /* Constructors */
        Op(double val);

        double evaluate();
};

#endif // __OP_H__