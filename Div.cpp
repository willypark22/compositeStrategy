#include <iostream>
#include "Div.h"

using namespace std;

Div::Div(Base* left, Base* right) {
    lhs = left;
    rhs = right;
}

double Div::evaluate() {
    double ans = lhs->evaluate() / rhs->evaluate();
    
    return ans;
}