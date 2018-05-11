#ifndef __HEXFACTORY_H__
#define __HEXFACTORY_H__
#include "BasePrint.h"
#include "BaseFactory.h"

class HexFactory : public BaseFactory {
	public:
		/* Constructor */
		HexFactory();

		/* Pure Virtual Generate Function */
		BasePrint* generatePrint(double value);
};
#endif