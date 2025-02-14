#include "GlassFurnitureFactory.h"
#include "../products/GlassChair.h"
#include "../products/GlassSofa.h"
#include "../products/GlassTable.h"

Chair* GlassFurnitureFactory::create_chair () const {
    return new GlassChair();
}

Sofa* GlassFurnitureFactory::create_sofa () const {
    return new GlassSofa();
}

Table* GlassFurnitureFactory::create_table () const {
    return new GlassTable();
}