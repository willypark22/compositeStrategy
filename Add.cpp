#include <iostream>
#include "Add.h"

using namespace std;

Add::Add(Base* left, Base* right) {
    lhs = left;
    rhs = right;
}

double Add::evaluate() {
    double ans = lhs->evaluate() + rhs->evaluate();
    
    return ans;
}