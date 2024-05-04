#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"
#include "Hero.h"

class Inventory
{
public:
    Inventory();
    ~Inventory();
    void addItem(Item* item);
    void printAllItems() const;
    void useItem(int index);

private:
    std::vector<Item*> items;
    Hero * hero;
};

#endif