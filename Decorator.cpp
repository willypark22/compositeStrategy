#include <iostream>
#include "Decorator.h"

using namespace std;


Decorator::Decorator() {}

Decorator::Decorator(Base* num) {

	decorated = num;
	
}
