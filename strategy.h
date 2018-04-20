#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>

#include "container.h"
#include "component.h"

using namespace std;

class Container;
class Sort {
    public: 
        /* Constructors */
        Sort() { };

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

class SelectionSort: public Sort {
	public:
		SelectionSort() : Sort() { };
		void sort(Container* container);
};

class BubbleSort: public Sort {
	public:
		BubbleSort() : Sort() { };
		void sort(Container* container);
};

#endif // __STRATEGY_H__
