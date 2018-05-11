#include <iostream>
#include "Sub.h"

using namespace std;

Sub::Sub(Base* left, Base* right) {
    lhs = left;
    rhs = right;
}

double Sub::evaluate() {
    double ans = lhs->evaluate() - rhs->evaluate();
    
    return ans;
}