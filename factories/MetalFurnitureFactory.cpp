#include "MetalFurnitureFactory.h"
#include "../products/MetalChair.h"
#include "../products/MetalSofa.h"
#include "../products/MetalTable.h"

Chair* MetalFurnitureFactory::create_chair() const {
    return new MetalChair();
}

Sofa* MetalFurnitureFactory::create_sofa() const {
    return new MetalSofa();
}

Table* MetalFurnitureFactory::create_table() const {
    return new MetalTable();
}