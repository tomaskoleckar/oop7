#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"

class Armor : public Item
{
public:
    Armor(const std::string&, int armorValue);
    virtual ~Armor();
    virtual std::string ToString() const;

private:
    int armorValue;
};

#endif