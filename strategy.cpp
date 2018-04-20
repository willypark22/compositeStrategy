#include <iostream>

#include "container.h"
#include "strategy.h"

using namespace std;

void SelectionSort::sort(Container* container) {
	for(int i = 0; i < container->size() - 1; i++) {
		int min = i;
		for(int j = i + 1; j < container->size(); j++) {
			if(container->at(j) < container->at(min)) {
				min = j;
			}
			Base* temp = container->at(min);
			*container->at(min) = *container->at(i);
			*container->at(i) = *temp;
		}
	}
};

void BubbleSort::sort(Container* container) {
	for(int i = 0; i < container->size() - 1; i++) {
		for(int j = 0; j < container->size() - i - 1; j++) {
			if(container->at(j) > container->at(j + 1)) {
				Base* temp = container->at(j + 1);
				*container->at(j) = *(container->at(j + 1));
				*container->at(j + 1) = *temp;
			}
		}
	}
};
