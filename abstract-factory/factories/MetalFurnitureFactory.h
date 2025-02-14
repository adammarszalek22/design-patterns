#ifndef METALFURNITUREFACTORY_H
#define METALFURNITUREFACTORY_H

#include "FurnitureFactory.h"
#include "../products/Chair.h"
#include "../products/Sofa.h"
#include "../products/Table.h"

class MetalFurnitureFactory : public FurnitureFactory {
    public:
        Chair* create_chair() const override;
        Sofa* create_sofa() const override;
        Table* create_table() const override;
};

#endif