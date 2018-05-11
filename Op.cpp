#include <iostream>
#include "Op.h"

using namespace std;

Op::Op(double val) {
    value = val;
}

double Op::evaluate() {
    return value;
}