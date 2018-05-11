#include <iostream>
#include "Sqr.h"

using namespace std;

Sqr::Sqr(Base* expr) {
    expression = expr;
}

double Sqr::evaluate() {
    double ans = (expression->evaluate()) * (expression->evaluate());
    
    return ans;
}