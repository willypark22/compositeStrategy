#include <iostream>

#include "container.h"
#include "strategy.h"

using namespace std;



void SelectionSort::sort(Container* container) {
	for(int i = 0; i < container->size(); i++) {
		int min = i;
		for(int j = i + 1; j < container->size(); j++) {
			if(container->at(j)->evaluate() < container->at(i)->evaluate()) {
				min = j;
			}
	
			if (i != min) {
				container->swap(i, min);
			}			

		}
	}
};

void BubbleSort::sort(Container* container) {
	for(int i = 0; i < container->size() - 1; i++) {
		for(int j = 0; j < container->size() - i - 1; j++) {
			if(container->at(j) > container->at(j + 1)) {
				container->swap(i, j);
			}
		}
	}
};
