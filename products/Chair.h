#ifndef CHAIR_H
#define CHAIR_H

class Chair {
public:
    virtual ~Chair() {}
    virtual void sit_down() const = 0;
};

#endif