#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "Hero.h"

class Item
{
public:
    Item(const std::string& name);
    virtual ~Item();
    virtual std::string ToString() const = 0; 
    virtual void use(Hero* hero);
    bool isUsed();

protected:
    std::string name;
    bool wasUsed;
};

#endif
