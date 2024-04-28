#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    Item(const std::string& name);
    virtual ~Item();
    virtual std::string ToString() const = 0; 

protected:
    std::string name;
};

#endif
