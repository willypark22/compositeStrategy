#ifndef __BINARYPRINT_H__
#define __BINARYPRINT_H__
#include "BasePrint.h"

class BinaryPrint : public BasePrint {
	private:
		/* Value to Print */
		double value;    
    
    public:
        /* Constructors */
		BinaryPrint();
		BinaryPrint(double val);
		
        void print();
};
#endif