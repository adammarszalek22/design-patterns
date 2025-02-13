#ifndef SOFA_H
#define SOFA_H

class Sofa {
public:
    virtual ~Sofa() {};
    virtual void sit_down() const = 0;
    virtual void lie_down() const = 0;
};

#endif