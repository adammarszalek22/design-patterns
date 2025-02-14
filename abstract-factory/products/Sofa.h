#ifndef SOFA_H
#define SOFA_H

#include <string>

class Sofa {
public:
    virtual ~Sofa() {};
    virtual std::string sit_down() const = 0;
    virtual std::string lie_down() const = 0;
};

#endif