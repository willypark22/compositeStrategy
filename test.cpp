#include <iostream>

#include "component.h"
#include "Op.h"
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"
#include "Sqr.h"

#include "Sort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"

#include "Container.h"
#include "VectorContainer.h"
#include "ListContainer.h"

#include "Decorator.h"
#include "Ceil.h"
#include "Floor.h"
#include "Abs.h"

#include "BasePrint.h"
#include "BinaryPrint.h"
#include "HexPrint.h"
#include "DoublePrint.h"

#include "DoubleFactory.h"
#include "BinaryFactory.h"
#include "HexFactory.h"


using namespace std;

int main() {
    
BaseFactory* factoryType;
string flag = "";
bool validFlag = 0;

while (validFlag != 1) {
    cout << "Enter desired printing format." << endl;
    cout << "(d = double)" << endl;
    cout << "(h = hex)" << endl;
    cout << "(b = binary)" << endl;
    cin >> flag;
    
    if (flag == "d") {
        factoryType = new DoubleFactory();
        validFlag = 1;
    }
    else if (flag == "h") {
        factoryType = new HexFactory();
        validFlag = 1;
    }
    else if (flag == "b") {
        factoryType = new BinaryFactory();
        validFlag = 1;
    }
    else {
        cout << "Not valid input. Please enter d, h, or b." << endl;
        cin >> flag;
    }
}

Op* op1 = new Op(5);
Op* op2 = new Op(-2);
Op* op3 = new Op(4);
Op* op4 = new Op(0.5);
Mult* A = new Mult(op1, op2);
Sub* B = new Sub(op3, op4);
Add* C = new Add(A, B);
Sqr* D = new Sqr(C);

VectorContainer* vectorCont = new VectorContainer(factoryType);

vectorCont->add_element(A);
vectorCont->add_element(B);
vectorCont->add_element(D);
    
cout << "Test printing of vector container:" << endl;

vectorCont->print();


ListContainer* listCont = new ListContainer(factoryType);

listCont->add_element(A);
listCont->add_element(B);
listCont->add_element(D);

cout << "Test printing of list container:" << endl;

listCont->print();


// >>>>>>>>>>>>>>>>>>>>LAB4 TESTS START HERE<<<<<<<<<<<<<<<<<<<<<<

/*cout << "Testing DoublePrint: " << endl;
    DoublePrint* dp = new DoublePrint(c->evaluate());
    dp->print();

cout << "Testing BinaryPrint: " << endl;
    BinaryPrint* bp = new BinaryPrint(8.0);
    bp->print();
    cout << "1000 (answer)" << endl;

cout << "Testing HexPrint: " << endl;
    HexPrint* hp = new HexPrint(c->evaluate());
    hp->print();

cout << "Testing DoubleFactory: " << endl;
    DoubleFactory* df = new DoubleFactory();
    df->generatePrint(12.34)->print();
    
    
cout << "Testing BinaryFactory: " << endl;
    BinaryFactory* bf = new BinaryFactory();
    bf->generatePrint(56.78)->print();
    
cout << "Testing HexFactory: " << endl;
    HexFactory* hf = new HexFactory();
    hf->generatePrint(98.76)->print();    
*/

cout << "Testing complete." << endl;

return 0;
};
