#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "component.h"

class Decorator : public Base {

	protected:
		Base* decorated;
		
	public:
		Decorator();
		Decorator(Base* );
		
		virtual double evaluate() = 0;

};

#endif
