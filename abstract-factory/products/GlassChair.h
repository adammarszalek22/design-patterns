#ifndef GLASSCHAIR_H
#define GLASSCHAIR_H

#include "Chair.h"
#include <iostream>

#include <string>

class GlassChair : public Chair {
    public:
        std::string sit_down() const override;
};

#endif