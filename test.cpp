#include <iostream>
#include "factories/GlassFurnitureFactory.h"
#include "factories/MetalFurnitureFactory.h"
#include "factories/WoodenFurnitureFactory.h"

#include <string>

int main() {

    FurnitureFactory* glass_factory = new GlassFurnitureFactory();
    FurnitureFactory* metal_factory = new MetalFurnitureFactory();
    FurnitureFactory* wooden_factory = new WoodenFurnitureFactory();

    Chair* chair = glass_factory->create_chair();
    std::string output1 = chair->sit_down();

    std::cout << (output1 == "It's a very weak glass, be careful when sitting on it!") << std::endl;

    Table* table = metal_factory->create_table();
    std::string output2 = table->put_something_down();

    std::cout << (output2 == "That is a weird table") << std::endl;

    Sofa* sofa = wooden_factory->create_sofa();
    std::string output3 = sofa->sit_down();

    std::cout << (output3 == "Watch out for splinters!") << std::endl;
    
    delete chair;
    delete table;
    delete sofa;

    delete glass_factory;
    delete metal_factory;
    delete wooden_factory;

    return 0;

}