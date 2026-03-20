#include <iostream>
#include "Enemy.h"

using namespace std;


class Weapon{
    public:
    string name;
    string type;
    int damage;
    int durability;

    Weapon();
    Weapon(string);

    bool attack(Enemy*);
    void print();
};
