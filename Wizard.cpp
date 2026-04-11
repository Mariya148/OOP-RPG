#include "Character.h"

Wizard::Wizard(string n) : Character(n, "Wizard"){
    hp = 5;
    full_hp = 5;
    power = 4;
    generate_weapon();
}

void Wizard::generate_weapon(){
    delete weapon;
    weapon = new Wand();
}
