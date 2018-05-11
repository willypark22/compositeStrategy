#include <iostream>
#include <cmath>
#include "Ceil.h"
#include "Decorator.h"

using namespace std;

Ceil::Ceil() {}

Ceil::Ceil(Base* decor) {
    decorated = decor;
}

double Ceil::evaluate() {
    double ans = ceil(decorated->evaluate());
    
    return ans;
}