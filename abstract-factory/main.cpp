#include <iostream>
#include "factories/GlassFurnitureFactory.h"
#include "factories/MetalFurnitureFactory.h"
#include "factories/WoodenFurnitureFactory.h"

int main() {

    FurnitureFactory* glass_factory = new GlassFurnitureFactory();
    FurnitureFactory* metal_factory = new MetalFurnitureFactory();
    FurnitureFactory* wooden_factory = new WoodenFurnitureFactory();

    Chair* chair = glass_factory->create_chair();
    std::cout << chair->sit_down() << std::endl;

    Table* table = metal_factory->create_table();
    std::cout << table->put_something_down() << std::endl;

    Sofa* sofa = wooden_factory->create_sofa();
    std::cout << sofa->sit_down() << std::endl;
    
    delete chair;
    delete table;
    delete sofa;

    delete glass_factory;
    delete metal_factory;
    delete wooden_factory;

    return 0;

}