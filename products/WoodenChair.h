#ifndef WOODENCHAIR_H
#define WOODENCHAIR_H

#include "Chair.h"
#include <iostream>

#include <string>

class WoodenChair : public Chair {
    public:
        std::string sit_down() const override;
};

#endif