#include <iostream>
#include "Container.h"
#include "ListContainer.h"
#include "VectorContainer.h"
#include "component.h"
#include "Sort.h"
#include "SelectionSort.h"

using namespace std;

SelectionSort::SelectionSort() {}

void SelectionSort::sort(Container* container) {
    unsigned i = 0;
    unsigned j = 0;
    unsigned smallest = 0;
    
    for (i = 0; i < container->size(); i++) {
        smallest = i;
        
        for (j = i + 1; j < container->size(); j++) {
            if (container->at(j)->evaluate() < container->at(i)->evaluate()) {
                smallest = j;
            }
        }
        
        if (i != smallest) {
            container->swap(i,smallest);
        }
    }
}