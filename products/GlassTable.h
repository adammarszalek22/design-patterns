#ifndef GLASSTABLE_H
#define GLASSTABLE_H

#include "Table.h"
#include <iostream>

class GlassTable : public Table {
    public:
        void put_something_down() const override;
};

#endif