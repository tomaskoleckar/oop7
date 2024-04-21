#pragma once
#include <iostream>

class Sprite
{
public:
	Sprite(double HP, double baseDmg);
	bool getHit(double dmg);
	void attack(Sprite* targetSprite);
	double getHp();
	double getBaseDamage();
	void setHp(double HP);
	void setBaseDamage(double baseDamage);
	bool isAlive();

private:
	double HP;
	double baseDamage;
};

