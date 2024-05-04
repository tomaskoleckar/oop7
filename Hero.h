#ifndef HERO_H
#define HERO_H

#include "Sprite.h"
#include "Inventory.h"
#include <vector>
#include "Monster.h"
#include "Trophy.h"
#include "Item.h"
#include "Weapon.h"

class Hero : public Sprite
{
public:
    Hero(double HP, double baseDamage, double armor);
    bool getHit(double dmg);
    double getMoney();
    void attack(Monster* targetSprite);
    void sellTrophy();
    double getArmor();
    Weapon* getWeapon();
    void setWeapon(Weapon* weapon);
    void setArmor(double armor);
    void addToInventory(Item* item);
    void printInventory(); 
    ~Hero();

private:
    double armor;
    double money;
    Weapon* weapon;
    std::vector<Trophy> trophies;
    Inventory inventory;
};

#endif