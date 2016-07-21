#ifndef __COMPOSITE_H__
#define __COMPOSITE_H__

class Base {
    public:
        /* Constructors */
        Base() {}

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

#endif // __COMPOSITE_H__
