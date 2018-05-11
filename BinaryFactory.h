#ifndef __BINARYFACTORY_H__
#define __BINARYFACTORY_H__
#include "BasePrint.h"
#include "BaseFactory.h"

class BinaryFactory : public BaseFactory {
	public:
		/* Constructor */
		BinaryFactory();

		/* Pure Virtual Generate Function */
		BasePrint* generatePrint(double value);
};
#endif