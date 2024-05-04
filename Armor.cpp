#include "Armor.h"
#include <sstream>

Armor::Armor(const std::string& name, int armorValue)
    : Item(name), armorValue(armorValue) {}

Armor::~Armor() {}

std::string Armor::ToString() const {
    std::stringstream ss;
    ss << name << ", adds " << armorValue << " armor";
    return ss.str();
}

void Armor::use(Hero *hero)
{
    this->wasUsed = true;
    hero->setArmor(hero->getArmor() + this->armorValue);
}
