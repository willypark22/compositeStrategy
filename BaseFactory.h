#ifndef __BASEFACTORY_H__
#define __BASEFACTORY_H__
#include "BasePrint.h"

class BaseFactory {
	public:
		/* Constructor */
		BaseFactory();

		/* Pure Virtual Generate Function */
		virtual BasePrint* generatePrint(double value) = 0;
};
#endif