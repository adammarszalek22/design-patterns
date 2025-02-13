#ifndef GLASSSOFA_H
#define GLASSSOFA_H

#include "Sofa.h"
#include <iostream>

#include <string>

class GlassSofa : public Sofa {
    public:
        std::string sit_down() const override;
        std::string lie_down() const override;
};

#endif