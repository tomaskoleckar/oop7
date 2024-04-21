#ifndef HERO_H
#define HERO_H
#include "Sprite.h"
#include "Trophy.h"
#include "vector"
#include "Monster.h"
#pragma once

class Hero : public Sprite
{
public:
    Hero(double HP, double baseDamage,double armor);
    bool getHit(double dmg);
    void attack(Monster* targetSprite);
    void sellTrophy();
    ~Hero();

private:
    double armor;
    double money;
    std::vector<Trophy> trophies;
};

#endif