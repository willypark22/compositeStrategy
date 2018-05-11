#include <iostream>
#include"Container.h"

using namespace std;


void Container::set_sort_function(Sort* newSortFunction) {
    sort_function = newSortFunction;
}

Container::Container() {
    sort_function = NULL;
    base_factory = NULL;
}

Container::Container(Sort* function, BaseFactory* factory) {

    sort_function = function;
    base_factory = factory;
    
}