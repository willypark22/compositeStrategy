#ifndef __SELECTIONSORT_H__
#define __SELECTIONSORT_H__
#include "Sort.h"

class SelectionSort : public Sort {
  public:
    /* Constructors */
    SelectionSort();
    /* Pure Virtual Functions */
    void sort(Container* container);
};

#endif