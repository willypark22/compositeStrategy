#ifndef __SUB_H__
#define __SUB_H__
#include "component.h"

class Sub : public Base {
    private:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        Sub(Base* left, Base* right);

        double evaluate();
};

#endif // __SUB_H__