#ifndef __CEIL_H__
#define __CEIL_H__
#include "Decorator.h"
#include "component.h"

class Ceil : public Decorator {
	public:
		Ceil();
		Ceil(Base*);
		double evaluate();
};

#endif
