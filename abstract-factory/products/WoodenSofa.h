#ifndef WOODENSOFA_H
#define WOODENSOFA_H

#include "Sofa.h"
#include <iostream>

#include <string>

class WoodenSofa : public Sofa {
    public:
        std::string sit_down() const override;
        std::string lie_down() const override;
};

#endif