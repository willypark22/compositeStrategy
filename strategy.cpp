#include <iostream>

#include "container.h"
#include "strategy.h"

using namespace std;



void SelectionSort::sort(Container* container) {
	int i = 0;
	int j = 0;
	int min = 0;

	for(i = 0; i < container->size(); i++) {		
		min = i;
		//cout << container->at(i)->evaluate() << endl;
		for(j = i + 1; j < container->size(); j++) {
			if(container->at(j)->evaluate() < container->at(i)->evaluate()) {
				min = j;
			}
	

		}

	if (i != min) {
		container->swap(i, min);
	}	
	
}		


}

void BubbleSort::sort(Container* container) {
	for (int i = 0; i < container->size() - 1; i++) {
		for (int j = 1; j < container->size(); j++) {
			if (container->at(i)->evaluate() > container->at(j)->evaluate()) {
			container->swap(i, j);
			}
		}
	}
};
	
	


