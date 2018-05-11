#ifndef __BUBBLESORT_H__
#define __BUBBLESORT_H__
#include "Sort.h"

class BubbleSort : public Sort {
  public:
    /* Constructors */
    BubbleSort();
    /* Pure Virtual Functions */
    void sort(Container* container);
};

#endif