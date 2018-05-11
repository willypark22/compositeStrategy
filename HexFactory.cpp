#include "BaseFactory.h"
#include "HexFactory.h"
#include "BasePrint.h"
#include "HexPrint.h"
#include <iostream>

using namespace std;

HexFactory::HexFactory() {}

BasePrint* HexFactory::generatePrint(double value) {
    HexPrint* newHP = new HexPrint(value);
    return newHP;
}