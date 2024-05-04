#include "Weapon.h"
#include <sstream>

Weapon::Weapon(const std::string& name, int bonusDamage)
    : Item(name), bonusDamage(bonusDamage) {}

Weapon::~Weapon() {
}

int Weapon::getBonusDamage()
{
    return this->bonusDamage;
}

std::string Weapon::ToString() const {
    std::stringstream ss;
    ss << name << ", adds " << bonusDamage << " bonus damage";
    return ss.str();
}

void Weapon::use(Hero *hero)
{
    this->wasUsed = true;
    if(hero->getWeapon() != nullptr){
        hero->setBaseDamage(hero->getBaseDamage() - hero->getWeapon()->getBonusDamage());
        hero->getWeapon()->setUse(false);
        hero->setWeapon(this);
    }
    else{
        hero->setWeapon(this);
    }

    hero->setBaseDamage(hero->getBaseDamage() + this->bonusDamage);
}
