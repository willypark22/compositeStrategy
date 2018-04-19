#ifndef __STRATEGY_H__
#define __STRATEGY_H__

class Container;
class Sort {
    public: 
        /* Constructors */
        Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

class SelectionSort: public Sort {
	public:
		SelectionSort() : Sort() { };
		void sort(Container* container) {
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
};

class BubbleSort: public Sort {
	public:
		BubbleSort() : Sort() { };
		void sort(Container* container) {
			for(int i = 0; i < container->size() - 1; i++) {
				for(int j = 0; j < container->size() - i - 1; i++) {
					if(container->at(j) > container->at(j + 1)) {
						Base* temp = container->at(j + 1);
						*container->at(j) = *(container->(j + 1));
						*container->at(j + 1) = *temp;
					}
				}
			}
		};
};

#endif // __STRATEGY_H__
