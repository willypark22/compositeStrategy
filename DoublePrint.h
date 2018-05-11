#ifndef __DOUBLEPRINT_H__
#define __DOUBLEPRINT_H__
#include "BasePrint.h"

class DoublePrint : public BasePrint {
	private:
		/* Value to Print */
		double value;
		
    public:
        /* Constructors */
		DoublePrint();
		DoublePrint(double val);
		
        void print();
};
#endif