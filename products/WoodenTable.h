#ifndef WOODENTABLE_H
#define WOODENTABLE_H

#include "Table.h"
#include <iostream>

#include <string>

class WoodenTable : public Table {
    public:
        std::string put_something_down() const override;
};

#endif