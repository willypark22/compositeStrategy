#include <iostream>
#include <exception>
#include <stdexcept>
#include <list>
#include "ListContainer.h"
#include "Container.h"
#include "component.h" //base
#include "Sort.h"

using namespace std;

ListContainer::ListContainer() {
    sort_function = NULL;
    base_factory = NULL;
}

ListContainer::ListContainer(Sort* function) {
    sort_function = function;
    // base_factory = factory;
}

ListContainer::ListContainer(BaseFactory* factory) {
    // sort_function = function;
    base_factory = factory;
}

void ListContainer::set_sort_function(Sort* newSortFunction) {
    sort_function = newSortFunction;
}

// insert the top pointer of the tree into the container
void ListContainer::add_element(Base* element) {
    container.push_back(element);
}

// iterate through the trees and output values
void ListContainer::print() {
    for(list<Base*>::const_iterator it = container.begin(), end = container.end(); it != end; ++it) {
        base_factory->generatePrint((*it)->evaluate())->print();
        // cout << (*it)->evaluate() << " ";
    }
    cout << endl;
}

// calls on the previously set sorting-algorithm. 
// Check if sort_function is not null, throw exception if is null
void ListContainer::sort() {
    try {
        if (sort_function == NULL) {
            throw runtime_error("Sort function is NULL.");
        }
        sort_function->sort(this); //call sorting algorithm
    }    
    catch (runtime_error& excpt) {
        cout << excpt.what() << endl;
    }
}


void ListContainer::swap(int i, int j) {
    unsigned iUnsigned = static_cast<unsigned>(i);
    unsigned jUnsigned = static_cast<unsigned>(j);
    
    if (container.size() > iUnsigned && container.size() > jUnsigned) {
        list<Base*>::iterator it1 = this->container.begin();
        advance(it1,i);
        list<Base*>::iterator it2 = this->container.begin();
        advance(it2,j);
        Base* temp = *it1;
        *it1 = *it2;
        *it2 = temp;
    }
}

Base* ListContainer::at(int i) {
    // unsigned iUnsigned = static_cast<unsigned>(i);
    // if (container.size() > iUnsigned) {
        list<Base*>::iterator it = this->container.begin();
        advance(it,i);
        return *it;
    // }
}

unsigned ListContainer::size() {
    return container.size();
}