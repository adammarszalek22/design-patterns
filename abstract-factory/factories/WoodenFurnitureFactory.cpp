#include "WoodenFurnitureFactory.h"
#include "../products/WoodenChair.h"
#include "../products/WoodenSofa.h"
#include "../products/WoodenTable.h"

Chair* WoodenFurnitureFactory::create_chair() const {
    return new WoodenChair();
}

Sofa* WoodenFurnitureFactory::create_sofa() const {
    return new WoodenSofa();
}

Table* WoodenFurnitureFactory::create_table() const {
    return new WoodenTable();
}