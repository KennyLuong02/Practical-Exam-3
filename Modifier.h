#ifndef MODIFIER_H
#define MODIFIER_H
#include <iostream>
#include "GridUnit.h"

class Modifier {
    public:
        virtual void apply(GridUnit& unit) = 0;
};

#endif