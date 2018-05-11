#include "BaseFactory.h"
#include "BinaryFactory.h"
#include "BasePrint.h"
#include "BinaryPrint.h"
#include <iostream>

using namespace std;

BinaryFactory::BinaryFactory() {}

BasePrint* BinaryFactory::generatePrint(double value) {
    BinaryPrint* newBP = new BinaryPrint(value);
    return newBP;
}