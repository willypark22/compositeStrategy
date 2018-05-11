#ifndef __VECTORCONTAINER_H__
#define __VECTORCONTAINER_H__

#include <iostream>
#include <vector>
#include "Container.h"
#include "component.h" //base
#include "BaseFactory.h"

using namespace std;

class VectorContainer : public Container {
protected:
    vector<Base*> container;
    
public:
    VectorContainer();
    VectorContainer(Sort* function);
    VectorContainer(BaseFactory* factory);
    void set_sort_function(Sort* newSortFunction);

    void add_element(Base* element);
    void print();
    void sort();
    void swap(int i, int j);
    Base* at(int i);
    unsigned size();
};
#endif