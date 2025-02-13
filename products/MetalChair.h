#ifndef METALCHAIR_H
#define METALCHAIR_H

#include "Chair.h"
#include <iostream>

class MetalChair : public Chair {
    public:
        void sit_down() const override;
};

#endif