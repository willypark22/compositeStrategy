#include <iostream>
#include <cmath>
#include "Abs.h"
#include "Decorator.h"

using namespace std;

Abs::Abs() {}

Abs::Abs(Base* decor) {
    decorated = decor;
}

double Abs::evaluate() {
    double ans = abs(decorated->evaluate());
    
    return ans;
}