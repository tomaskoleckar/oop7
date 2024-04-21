#include "Monster.h"

Monster::Monster(double HP,double baseDamage,int value,std::string name):Sprite(HP,baseDamage)
{
    this->value = value;
    this->name = name;
}

int Monster::getValue()
{
    return this->value;
}

std::string Monster::getName()
{
    return this->name;
}

Monster::~Monster()
{

}