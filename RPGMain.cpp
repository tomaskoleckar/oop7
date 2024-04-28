#include <iostream>
#include "Hero.h"
#include "Weapon.h"
#include "Armor.h"

int main() {
    Hero hero(100, 20, 10);

    Weapon sword("Sword", 15);
    Armor shield("Shield", 20); 

    hero.addToInventory(&sword);
    hero.addToInventory(&shield);

    std::cout << "Hero's Inventory:" << std::endl;
    hero.printInventory();

    Monster monster(50, 10, 5, "Orc");
    while (monster.isAlive())
    {
        hero.attack(&monster);
    }
    

    hero.sellTrophy();
    std::cout << "Hero's money: " << hero.getMoney() << std::endl;


    return 0;
}
