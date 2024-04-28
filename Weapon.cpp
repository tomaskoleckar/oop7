#include "Weapon.h"
#include <sstream>

Weapon::Weapon(const std::string& name, int bonusDamage)
    : Item(name), bonusDamage(bonusDamage) {}

Weapon::~Weapon() {}

std::string Weapon::ToString() const {
    std::stringstream ss;
    ss << name << ", adds " << bonusDamage << " bonus damage";
    return ss.str();
}
