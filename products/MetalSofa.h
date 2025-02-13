#ifndef METALSOFA_H
#define METALSOFA_H

#include "Sofa.h"
#include <iostream>

class MetalSofa : public Sofa {
    public:
        void sit_down() const override;
        void lie_down() const override;
};

#endif