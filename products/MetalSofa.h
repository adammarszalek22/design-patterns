#ifndef METALSOFA_H
#define METALSOFA_H

#include "Sofa.h"
#include <iostream>

#include <string>

class MetalSofa : public Sofa {
    public:
        std::string sit_down() const override;
        std::string lie_down() const override;
};

#endif