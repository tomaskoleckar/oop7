#include "Item.h"

Item::Item(const std::string& name) : name(name), wasUsed(false) {}

Item::~Item() {}

std::string Item::ToString() const {
    return name;
}

void Item::use(Hero *hero)
{
}

bool Item::isUsed()
{
    return this->wasUsed;
}

void Item::setUse(bool used)
{
    this->wasUsed = used;
}
