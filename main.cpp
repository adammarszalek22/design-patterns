#include <iostream>
#include "factories/GlassFurnitureFactory.h"
#include "factories/MetalFurnitureFactory.h"
#include "factories/WoodenFurnitureFactory.h"

int main() {

    FurnitureFactory* glassfactory = new GlassFurnitureFactory();
    FurnitureFactory* metalFactory = new MetalFurnitureFactory();
    FurnitureFactory* woodenFactory = new WoodenFurnitureFactory();

    Chair* chair = glassfactory->create_chair();
    chair->sit_down();

    Table* table = metalFactory->create_table();
    table->put_something_down();

    Sofa* sofa = woodenFactory->create_sofa();
    sofa->lie_down();
    
    delete chair;
    delete table;
    delete sofa;

    delete glassfactory;
    delete metalFactory;
    delete woodenFactory;

    return 0;

}