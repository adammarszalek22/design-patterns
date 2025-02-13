#ifndef WOODENTABLE_H
#define WOODENTABLE_H

#include "Table.h"
#include <iostream>

class WoodenTable : public Table {
    public:
        void put_something_down() const override;
};

#endif