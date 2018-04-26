#include <iostream>

#include "container.h"
#include "strategy.h"

using namespace std;



void SelectionSort::sort(Container* container) {
	int i = 0;
	int j = 0;
	int min = 0;

	for(i = 0; i < container->size(); i++) {
		cout << "I " << container->at(i)->evaluate() << endl;		
		min = i;
		//cout << container->at(i)->evaluate() << endl;
		for(j = i + 1; j < container->size(); j++) {
			cout << "J " << container->at(j)->evaluate() << endl;	
			if(container->at(j)->evaluate() < container->at(i)->evaluate()) {
				cout << "A" << endl;
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
