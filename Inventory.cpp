#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {}

Inventory::~Inventory() {
    // CAUSING SEGMENTATION FAULT

    // for (int i = items.size() - 1;i>=0;i--) {
    //     delete items[i];
    // }
}


void Inventory::addItem(Item* item) {
    items.push_back(item);
}

void Inventory::printAllItems() const {
    if (items.empty()) {
        std::cout << "Inventory is empty" << std::endl;
        return;
    }

    std::cout << "Inventory:" << std::endl;
    for (Item* item : items) {
        std::cout << "- " << item->ToString() << std::endl;
    }
}

void Inventory::useItem(int index)
{
    if(index < this->items.size()){
        if(this->items[index]->isUsed()){
            this->items[index]->use(this->hero);
        }
        else{
        std::cout << "Item already being used !" << std::endl;
        }
    }
    else{
        std::cout << "Item not in inventory !" << std::endl;
    }
}
