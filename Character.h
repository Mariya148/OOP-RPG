#include <iostream>
#include "Weapon.h"

using namespace std;

class Character{
    private:
    int xp;

    protected:
    int full_hp;

    public:
    string name;
    int hp;
    int power;
    string type;
    Weapon weapon;

    // constructor
    Character(string , string );

    Character();

    void takeDamage(int);
    void heal(int);
    bool attack(Enemy*);

    void print_hp();

    void print();
    void print_with_weapon();

    int get_level();
};

class Wizard : public Character{
    public:
    Wizard(string);
};

class Archer : public Character{
    public:
    Archer(string);
};

class Warrior : public Character{
    public:
    Warrior(string);
};
