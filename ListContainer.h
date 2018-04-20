#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include <list>
#include <iterator>
#include <cstdlib>

#include "container.h"
#include "strategy.h"

using namespace std;

class listContainer: public Container {
	private:
		list<Base*> numList;
	
	public:
		void add_element(Base* element) {
			numList.push_back(element);
		};

		Base* at(int i) {
			list<Base*>::iterator it = numList.begin();
			advance(it, i);
			return *it;
		};

		void print() {
			for(list<Base*>::iterator i = numList.begin(); i != numList.end(); ++i) {
				cout << *i << " ";
			}
		};

		void sort() {
			try {
				if(sort_function == NULL) {
					throw 1;
				}
			}
			catch(int error_val) {
				cout << "Error: Sort function not selected." << endl;
			}
			sort_function->sort(this);
		};

		void swap(int i, int j) {
			list<Base*>::iterator first = numList.begin();
			list<Base*>::iterator second = numList.begin();
			advance(first, i);
			advance(second, j);
			std::swap(*first, *second);
		};

		int size() {
			return numList.size();
		};
};

#endif
