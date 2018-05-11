#include "BinaryPrint.h"
#include <iostream>
//#include <bitset>
#include <bits/stdc++.h>

using namespace std;

//basic constructor
BinaryPrint::BinaryPrint() {
    value = 0;
}

BinaryPrint::BinaryPrint(double val) {
    value = val;
}

void BinaryPrint::print() {
    bitset<32> binaryVal(value);
    // binaryVal.reset();
    // binaryVal
    cout << binaryVal << endl;
}