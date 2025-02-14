#ifndef CHAIR_H
#define CHAIR_H

#include <string>

class Chair {
public:
    virtual ~Chair() {}
    virtual std::string sit_down() const = 0;
};

#endif