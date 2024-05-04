#include "Hero.h"

Hero::Hero(double HP, double baseDamage, double armor) : Sprite(HP, baseDamage), inventory() {
    this->armor = armor;
    this->money = 0;
    this->weapon = nullptr;
}

bool Hero::getHit(double attackingdmg) {
    double finalDmg = attackingdmg - this->armor;
    double currentHP = this->getHp();
    this->setHp(currentHP - finalDmg);
    std::cout << "Sprite's HP was reduced by " << finalDmg << std::endl;
    return isAlive();
}

double Hero::getMoney()
{
    return this->money;
}

void Hero::attack(Monster* targetSprite) {
    double finalDmg = this->getBaseDamage();
    bool isAlive = targetSprite->getHit(finalDmg);
    if (!isAlive) {
        Trophy trophy = Trophy(targetSprite->getName(), targetSprite->getValue());
        this->trophies.push_back(trophy);
        std::cout << "Enemy " << targetSprite->getName() << " has been killed" << std::endl;
    }
}

void Hero::sellTrophy() {
    if (this->trophies.size() != 0) {
        Trophy sellingTrophy = this->trophies.back();
        this->money += sellingTrophy.getValue();
        this->trophies.pop_back();
    } else {
        std::cout << "You dont have any trophy." << std::endl;
    }
}

double Hero::getArmor()
{
    return this->armor;
}

Weapon *Hero::getWeapon()
{
    return this->weapon;
}

void Hero::setWeapon(Weapon* weapon)
{
    this->weapon = weapon;
}

void Hero::setArmor(double armor)
{
    this->armor = armor;
}

void Hero::addToInventory(Item* item) {
    this->inventory.addItem(item);
}

void Hero::printInventory() {
    this->inventory.printAllItems();
}

Hero::~Hero() {}
