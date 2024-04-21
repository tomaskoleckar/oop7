#ifndef MONSTER_H
#define MONSTER_H
#include "Sprite.h"
#pragma once

class Monster : public Sprite
{
public:
    Monster(double HP,double baseDamage,int value,std::string name);
    int getValue();
    std::string getName();
    ~Monster();

private:
    int value;
    std::string name;
};

#endif