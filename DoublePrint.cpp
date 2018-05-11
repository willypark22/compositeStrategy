#include "DoublePrint.h"
#include <iostream>

using namespace std;

//basic constructor
DoublePrint::DoublePrint() { 
    value = 0; 
}

DoublePrint::DoublePrint(double val) {
    value = val;
}

void DoublePrint::print() {
    cout << value << endl; // Value already a double
}