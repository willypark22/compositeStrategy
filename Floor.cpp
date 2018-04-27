#include <iostream>
#include <cmath>
#include "Floor.h"
#include "Decorator.h"

using namespace std;

Floor::Floor() {}

Floor::Floor(Base* decor) {
	decorated = decor;
}

double Floor::evaluate() {
	double ans = floor(decorated->evaluate());
	
	return ans;
	
}
