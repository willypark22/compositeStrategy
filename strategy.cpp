#include <iostream>

#include "container.h"
#include "strategy.h"

using namespace std;



void SelectionSort::sort(Container* container) {
	int i = 0;
	int j = 0;
	int min = 0;

	for(i = 0; i < container->size() - 1; i++) {		
		min = i;
		//cout << container->at(i)->evaluate() << endl;
		for(j = i + 1; j < container->size(); j++) {
			if(container->at(j)->evaluate() < container->at(min)->evaluate()) {
				min = j;
			}
	

		}

	if (i != min) {
		container->swap(min, i);
	}	
	
}		


}

void BubbleSort::sort(Container* container) {
	for (int i = 0; i < container->size() - 1; i++) {
		for (int j = 0; j < container->size() - i - 1; j++) {
			if (container->at(j)->evaluate() > container->at(j + 1)->evaluate()) {
			container->swap(j, j + 1);
			}
		}
	}
};
	
	


