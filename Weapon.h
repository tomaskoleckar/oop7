#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
public:
    Weapon(const std::string& name, int bonusDamage);
    virtual ~Weapon();
    virtual std::string ToString() const;

private:
    int bonusDamage;
};

#endif