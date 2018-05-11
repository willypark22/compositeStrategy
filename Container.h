#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include "component.h"
#include "BaseFactory.h"

class Sort;
class Container {
  protected: 
    Sort* sort_function;
    BaseFactory* base_factory;
  public:
    /* Constructors */
    Container();
    Container(Sort* function, BaseFactory* factory);
    
    /* Non Virtual Functions */
    void set_sort_function(Sort* newSortFunction); // Set the type of sorting algorithm
    
    /* Pure Virtual Functions */
    // insert the top pointer of the tree into the container
    virtual void add_element(Base* element) = 0;
    // iterate through trees and output values
    virtual void print() = 0;
    // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
    virtual void sort() = 0;
    
    /* Essentially the only functions needed to sort */
    // switch tree locations
    virtual void swap(int i,int j) = 0;
    // get the top pointer of tree at index i
    virtual Base* at(int i) = 0;
    // return the container size
    virtual unsigned size() = 0;
};

#endif