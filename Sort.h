#ifndef __SORT_H__
#define __SORT_H__

#include "Container.h"
#include <iostream>

class Sort {
  public:
    /* Constructors */
    Sort();
    /* Pure Virtual Functions */
    virtual void sort(Container* container) = 0;
};

#endif