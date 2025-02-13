#ifndef WOODENCHAIR_H
#define WOODENCHAIR_H

#include "Chair.h"
#include <iostream>

class WoodenChair : public Chair {
    public:
        void sit_down() const override;
};

#endif