#include <iostream>

#include "HexPrint.h"

using namespace std;

HexPrint::HexPrint() { }

void HexPrint::print() {
	cout.precision(5);

	cout << hexfloat;
	cout << value << endl;
}
