#ifndef __MULT_H__
#define __MULT_H__
#include "component.h"

class Mult : public Base {
    private:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        Mult(Base* left, Base* right);

        double evaluate();
};

#endif // __MULT_H__