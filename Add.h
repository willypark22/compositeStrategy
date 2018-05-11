#ifndef __ADD_H__
#define __ADD_H__
#include "component.h"

class Add : public Base {
    private:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        Add(Base* left, Base* right);
        
        double evaluate();
};

#endif // __ADD_H__