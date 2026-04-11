#include "Character.h"

Archer::Archer(string n) : Character(n, "Archer"){
    hp = 7;
    full_hp = 7;
    power = 3;
    generate_weapon();
}

void Archer::generate_weapon(){
    delete weapon;
    weapon = new Bow();
}
