#ifndef HERO_H
#define HERO_H

#include "Sprite.h"
#include "Inventory.h"
#include <vector>
#include "Monster.h"
#include "Trophy.h"
#include "Item.h"

class Hero : public Sprite
{
public:
    Hero(double HP, double baseDamage, double armor);
    bool getHit(double dmg);
    double getMoney();
    void attack(Monster* targetSprite);
    void sellTrophy();
    void addToInventory(Item* item);
    void printInventory(); 
    ~Hero();

private:
    double armor;
    double money;
    std::vector<Trophy> trophies;
    Inventory inventory;
};

#endif