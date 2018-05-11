#include <iostream>
#include <iomanip>
#include "HexPrint.h"

using namespace std;

HexPrint::HexPrint() { }

HexPrint::HexPrint(double val) {
	value = val;
}

void HexPrint::print() {
	cout.precision(5);
	cout << hexfloat << value << endl;
}
