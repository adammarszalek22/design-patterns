#ifndef METALCHAIR_H
#define METALCHAIR_H

#include "Chair.h"
#include <iostream>

#include <string>

class MetalChair : public Chair {
    public:
        std::string sit_down() const override;
};

#endif