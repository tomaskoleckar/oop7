#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

class Inventory
{
public:
    Inventory();
    ~Inventory();
    void addItem(Item* item);
    void printAllItems() const;

private:
    std::vector<Item*> items;
};

#endif