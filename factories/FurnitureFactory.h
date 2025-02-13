#ifndef FURNITUREFACTORY_H
#define FURNITUREFACTORY_H

#include "../products/Chair.h"
#include "../products/Sofa.h"
#include "../products/Table.h"

class FurnitureFactory {
    public:
        virtual Chair* create_chair() const = 0;
        virtual Sofa* create_sofa() const = 0;
        virtual Table* create_table() const = 0;
};

#endif