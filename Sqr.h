#ifndef __SQR_H__
#define __SQR_H__
#include "component.h"

class Sqr : public Base {
    private:
        Base* expression;

    public:
        /* Constructors */
        Sqr(Base* expr);

        double evaluate();
};

#endif // __SQR_H__