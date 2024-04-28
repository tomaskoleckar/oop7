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
