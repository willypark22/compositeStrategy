#ifndef __LISTCONTAINER_H__
#define __LISTCONTAINER_H__

#include <iostream>
#include <list>
#include "Container.h"
#include "component.h" //base
#include "Sort.h"
#include "BaseFactory.h"

using namespace std;

class ListContainer : public Container {
protected:
    list<Base*> container;
    
public:
    ListContainer();
    ListContainer(Sort* function);
    ListContainer(BaseFactory* factory);
    void set_sort_function(Sort* newSortFunction);

    void add_element(Base*);
    void print();
    void sort();
    void swap(int i, int j);
    Base* at(int i);
    unsigned size();
};
#endif