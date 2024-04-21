#include "Hero.h"

Hero::Hero(double HP, double baseDamage, double armor):Sprite(HP,baseDamage)
{
    this->armor = armor;
    this->money = 0;
}

bool Hero::getHit(double attackingdmg)
{
	double finalDmg = attackingdmg - this->armor;
    double currentHP = this->getHp();
	this->setHp(currentHP -= finalDmg);
	std::cout << "Sprite's HP was reduced by " << finalDmg << std::endl;
	
	return isAlive();
}

void Hero::attack(Monster* targetSprite)
{
	double finalDmg = this->getBaseDamage();

	bool isAlive = targetSprite->getHit(finalDmg);
	
	if (!isAlive)
	{
        Trophy trophy = Trophy(targetSprite->getName(),targetSprite->getValue());
        this->trophies.push_back(trophy);
		std::cout << "Enemy sprite has been killed" << std::endl;
	}
}

void Hero::sellTrophy()
{
    if(this->trophies.size() != 0){
    Trophy sellingTrophy = this->trophies[this->trophies.size()];

    this->money += sellingTrophy.getValue();
    this->trophies.pop_back();
    
    }
    else{
        std::cout << "You dont have any trophy." << std::endl;
    }
}

Hero::~Hero()
{

}