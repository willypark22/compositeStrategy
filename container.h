#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include <iostream>
#include <vector>
#include <iterator>

#include "strategy.h"

using namespace std;

class Container {
    protected: 
        Sort* sort_function;

    public: 
        /* Cosntructors */
        Container() : sort_function(NULL) { }
        Container(Sort* function); 

        /* Non Virtual Functions */
        // Set the type of sorting algorithm
        void set_sort_function(Sort* sort_function) {
		this->sort_function = sort_function;
	}; 

        /* Pure Virtual Functions */
        // insert the top pointer of the tree into the container
        virtual void add_element(Base* element) = 0;
        // iterate through the trees and output values
        virtual void print() = 0;
        // calls on the previously set sorting-algorithm. 
        // Check if sort_function is not null, throw exception if is null
        virtual void sort() = 0;

        /* Essentially the only functions needed to sort */
        // switch tree locations
        virtual void swap(int i,int j) = 0;
        // get top pointer of tree at index i
        virtual Base* at(int i) = 0;
        // return container size;
        virtual int size() = 0;
};

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
			swap(*first, *second);
		};
		int size() {
			return numList.size();
		};
};

class VectorContainer: public Container {
        private:
                vector<Base*> numVec;

        public:
                void add_element(Base* element) {
                        numVec.push_back(element);
                };
		Base* at(int i) {
			return numVec.at(i);
		};
                void print() {
                        vector<Base*>::iterator it;
			for(it = numVec.begin(); it != vec.end(); ++it) {
				cout << *it << " ";
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
                        Base* temp = numVec.at(i);
			numVec.at(i) = numVec.at(j);
			numVec.at(j) = temp;
                };
                int size() {
                        return numVec.size();
                };
};


#endif // __CONTAINER_H__
