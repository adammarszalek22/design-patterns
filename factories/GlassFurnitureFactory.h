#ifndef GLASSFURNITUREFACTORY_H
#define GLASSFURNITUREFACTORY_H

#include "FurnitureFactory.h"
#include "../products/GlassChair.h"
#include "../products/GlassSofa.h"
#include "../products/GlassTable.h"

class GlassFurnitureFactory : public FurnitureFactory {
    public:
        Chair* create_chair() const override;
        Sofa* create_sofa() const override;
        Table* create_table() const override;
};

#endif