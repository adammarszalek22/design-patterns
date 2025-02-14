#include <iostream>
#include "factories/GlassFurnitureFactory.h"
#include "factories/MetalFurnitureFactory.h"
#include "factories/WoodenFurnitureFactory.h"

#include <string>

int main() {

    FurnitureFactory* factory = new GlassFurnitureFactory();

    // Glass Products
    Chair* chair = factory->create_chair();
    std::string output1 = chair->sit_down();

    Sofa* sofa = factory->create_sofa();
    std::string output2 = sofa->sit_down();
    std::string output3 = sofa->lie_down();
    
    Table* table = factory->create_table();
    std::string output4 = table->put_something_down();

    std::cout << (output1 == "It's a very weak glass, be careful when sitting on it!") << std::endl;
    std::cout << (output2 == "Sitting down, weak glass, careful!") << std::endl;
    std::cout << (output3 == "Might be a bit uncomfortable") << std::endl;
    std::cout << (output4 == "Better keep it clean!") << std::endl;

    delete factory;
    delete chair;
    delete sofa;
    delete table;

    // Wooden Products
    factory = new MetalFurnitureFactory();

    chair = factory->create_chair();
    std::string output5 = chair->sit_down();

    sofa = factory->create_sofa();
    std::string output6 = sofa->sit_down();
    std::string output7 = sofa->lie_down();

    table = factory->create_table();
    std::string output8 = table->put_something_down();

    std::cout << (output5 == "Not a very comfortable chair, is it?") << std::endl;
    std::cout << (output6 == "Sitting down") << std::endl;
    std::cout << (output7 == "Might be a bit uncomfortable") << std::endl;
    std::cout << (output8 == "That is a weird table") << std::endl;

    delete factory;
    delete chair;
    delete sofa;
    delete table;
    
    // Wooden Products
    factory = new WoodenFurnitureFactory();

    chair = factory->create_chair();
    std::string output9 = chair->sit_down();

    sofa = factory->create_sofa();
    std::string output10 = sofa->sit_down();
    std::string output11 = sofa->lie_down();

    table = factory->create_table();
    std::string output12 = table->put_something_down();

    std::cout << (output9 == "Watch out for splinters!") << std::endl;
    std::cout << (output10 == "Watch out for splinters!") << std::endl;
    std::cout << (output11 == "Might be a bit uncomfortable") << std::endl;
    std::cout << (output12 == "Watch out for splinters!") << std::endl;

    delete factory;
    delete chair;
    delete sofa;
    delete table;

    return 0;

}