#include "BaseFactory.h"
#include "DoubleFactory.h"
#include "BasePrint.h"
#include "DoublePrint.h"
#include <iostream>

using namespace std;

DoubleFactory::DoubleFactory() {}

BasePrint* DoubleFactory::generatePrint(double value) {
    DoublePrint* newDP = new DoublePrint(value);
    return newDP;
}