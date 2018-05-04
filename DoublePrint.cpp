#include <iostream>

#include "BasePrint.h"
#include "DoublePrint.h"

using namespace std;

DoublePrint::DoublePrint() { }

/*DoublePrint::DoublePrint(double val) {
	value = val;
}*/

void DoublePrint::print() {
	cout << value << endl;
}	
