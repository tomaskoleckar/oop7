#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
public:
    Weapon(const std::string& name, int bonusDamage);
    ~Weapon();
    int getBonusDamage();
    std::string ToString() const;
    void use(Hero* hero);

private:
    int bonusDamage;
};

#endif