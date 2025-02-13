#ifndef TABLE_H
#define TABLE_H

#include <string>

class Table {
public:
    virtual ~Table() {};
    virtual std::string put_something_down() const = 0;
};

#endif