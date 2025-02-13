#ifndef TABLE_H
#define TABLE_H

class Table {
public:
    virtual ~Table() {};
    virtual void put_something_down() const = 0;
};

#endif