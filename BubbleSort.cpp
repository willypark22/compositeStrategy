#include <iostream>
#include "Container.h"
#include "ListContainer.h"
#include "VectorContainer.h"
#include "component.h" //base
#include "Sort.h"
#include "BubbleSort.h"

using namespace std;

BubbleSort::BubbleSort() {}

void BubbleSort::sort(Container* container) {
    for (unsigned i = 0; i < container->size(); i++) {
        for (unsigned j = 1; j < container->size(); j++) {
            if (container->at(i)->evaluate() > container->at(j)->evaluate()) {
                container->swap(i,j);
            }
        }
    }
}