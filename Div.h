#ifndef __DIV_H__
#define __DIV_H__
#include "component.h"

class Div : public Base {
    private:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        Div(Base* left, Base* right);

        double evaluate();
};

#endif // __DIV_H__