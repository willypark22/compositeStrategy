#include <iostream>
#include "Mult.h"

using namespace std;

Mult::Mult(Base* left, Base* right) {
    lhs = left;
    rhs = right;
}

double Mult::evaluate() {
    double ans = lhs->evaluate() * rhs->evaluate();
    
    return ans;
}