#include "Sprite.h"

Sprite::Sprite(double HP, double baseDmg)
{
	this->HP = HP;
	this->baseDamage = baseDmg;
}

bool Sprite::isAlive()
{
	return this->HP > 0;
}

bool Sprite::getHit(double attackingdmg)
{
	double finalDmg = attackingdmg;

	this->HP -= finalDmg;
	std::cout << "Sprite's HP was reduced by " << finalDmg << std::endl;
	
	return isAlive();
}

void Sprite::attack(Sprite* targetSprite)
{
	double finalDmg = this->baseDamage;

	bool isAlive = targetSprite->getHit(finalDmg);
	
	if (!isAlive)
	{
		std::cout << "Enemy sprite has been killed" << std::endl;
	}
}

double Sprite::getHp()
{
	return this->HP;
}

double Sprite::getBaseDamage()
{
    return this->baseDamage;
}

void Sprite::setHp(double HP)
{
	this->HP = HP;
}

void Sprite::setBaseDamage(double baseDamage)
{
	this->baseDamage = baseDamage;
}