#ifndef WOODENSOFA_H
#define WOODENSOFA_H

#include "Sofa.h"
#include <iostream>

class WoodenSofa : public Sofa {
    public:
        void sit_down() const override;
        void lie_down() const override;
};

#endif