#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include "VectorContainer.h"
#include "Container.h"
#include "component.h" //base
#include "Sort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "BaseFactory.h"

using namespace std;

VectorContainer::VectorContainer() {
    sort_function = NULL;
    base_factory = NULL;
}

VectorContainer::VectorContainer(Sort* function) {
    sort_function = function;
    // base_factory = factory;
}

VectorContainer::VectorContainer(BaseFactory* factory) {
    // sort_function = function;
    base_factory = factory;
}

void VectorContainer::set_sort_function(Sort* newSortFunction) {
    sort_function = newSortFunction;
}

// insert the top pointer of the tree into the container
void VectorContainer::add_element(Base* element) {
    container.push_back(element);
}

// iterate through the trees and output values
void VectorContainer::print() {
    for (unsigned i = 0; i < container.size(); ++i) {
        base_factory->generatePrint(container.at(i)->evaluate())->print();
        cout << " ";
        // cout << container.at(i)->evaluate() << " ";
    }
    cout << endl;
}

void VectorContainer::sort() {
    try {
        if (sort_function == NULL) {
            throw runtime_error("Sort function is NULL.");
        }
        cout << endl;
        sort_function->sort(this); //call sorting algorithm
    }    
    catch (runtime_error& excpt) {
        cout << excpt.what() << endl;
    }
}

void VectorContainer::swap(int i, int j) {
    Base* temp = container.at(i);
    container.at(i) = container.at(j);
    container.at(j) = temp;
}

Base* VectorContainer::at(int i) {
    return container.at(i);
}

unsigned VectorContainer::size() {
    return container.size();
}
