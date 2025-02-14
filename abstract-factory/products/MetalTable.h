#ifndef METALTABLE_H
#define METALTABLE_H

#include "Table.h"
#include <iostream>

#include <string>

class MetalTable : public Table {
    public:
        std::string put_something_down() const override;
};

#endif