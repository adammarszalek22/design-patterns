#ifndef GLASSCHAIR_H
#define GLASSCHAIR_H

#include "Chair.h"
#include <iostream>

class GlassChair : public Chair {
    public:
        void sit_down() const override;
};

#endif