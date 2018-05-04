#ifndef __HexPrint_H__
#define __HexPrint_H__

#include "BasePrint.h"

class HexPrint : public BasePrint {
	public:
		HexPrint();
		HexPrint(double value) : BasePrint(value) { };
		
		void print();
};

#endif
