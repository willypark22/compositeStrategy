#include <iostream>
#include <bitset>

#include "BinaryPrint.h"

using namespace std;

BinaryPrint::BinaryPrint() { }

void BinaryPrint::print() {
	bitset<16> input (value);
	cout << input << endl;
}
