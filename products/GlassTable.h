#ifndef GLASSTABLE_H
#define GLASSTABLE_H

#include "Table.h"
#include <iostream>

#include <string>

class GlassTable : public Table {
    public:
        std::string put_something_down() const override;
};

#endif