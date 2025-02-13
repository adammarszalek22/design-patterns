#ifndef METALTABLE_H
#define METALTABLE_H

#include "Table.h"
#include <iostream>

class MetalTable : public Table {
    public:
        void put_something_down() const override;
};

#endif