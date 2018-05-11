#ifndef __DOUBLEFACTORY_H__
#define __DOUBLEFACTORY_H__
#include "BasePrint.h"
#include "BaseFactory.h"

class DoubleFactory : public BaseFactory {
	public:
		/* Constructor */
		DoubleFactory();

		/* Pure Virtual Generate Function */
		BasePrint* generatePrint(double value);
};
#endif