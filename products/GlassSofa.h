#ifndef GLASSSOFA_H
#define GLASSSOFA_H

#include "Sofa.h"
#include <iostream>

class GlassSofa : public Sofa {
    public:
        void sit_down() const override;
        void lie_down() const override;
};

#endif