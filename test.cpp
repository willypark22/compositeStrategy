#include <iostream>

#include "container.h"
#include "component.h"
#include "VectorContainer.h"
#include "ListContainer.h"
#include "strategy.h"

using namespace std;

int main() {
    Op* op1 = new Op(5);
    Op* op2 = new Op(2);
    Op* op3 = new Op(4);
    Op* op4 = new Op(6);
    Op* op5 = new Op(6.2);
    Op* op6 = new Op(-1);
    Mult* A = new Mult(op1, op2);
    Sub* B = new Sub(op3, op4);
    Add* C = new Add(A, B);
    Sqr* D = new Sqr(C);
    Ceil* E = new Ceil(op5);
    Floor* F = new Floor(op5);
    Absolute* G = new Absolute(op6);

    VectorContainer* container = new VectorContainer();
    //listContainer* container = new listContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(D);
    container->add_element(E);
    container->add_element(F);
    container->add_element(G);
    //cout << endl;
    cout << "Container Before Sort: " << endl;
    container->print();
    cout << endl;
    container->set_sort_function(new SelectionSort());
    container->sort();	
    cout << "Container After Sort: " << endl;
    container->print();
    cout << endl;
    
};
