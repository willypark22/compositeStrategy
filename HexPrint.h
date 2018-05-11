#ifndef __HEXPRINT_H__
#define __HEXPRINT_H__
#include "BasePrint.h"

class HexPrint : public BasePrint {
	private:
		/* Value to Print */
		double value;    
    
    public:
        /* Constructors */
		HexPrint();
		HexPrint(double val);
		
        void print();
};
#endif