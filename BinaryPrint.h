#ifndef __BinaryPrint_H__
#define __BinaryPrint_H__

#include "BasePrint.h"

class BinaryPrint : public BasePrint {
	public:
		BinaryPrint();
		BinaryPrint(double value) : BasePrint(value) { };

		void print();
};

#endif
