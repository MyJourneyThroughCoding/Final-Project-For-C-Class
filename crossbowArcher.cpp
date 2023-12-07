#include <iostream>
#include "crossbowArcher.h"

using namespace std;

crossbowArcher::crossbowArcher() : soilder(health=100, damage=25, stealth=50, armor=50, cost=10) {};

void crossbowArcher::print() const
{
  cout << "Crossbow Archer" << endl;
  cout << "Health: " << health << endl;
  cout << "Damage: " << damage << endl;
  cout << "Stealth: " << stealth << endl;
  cout << "Armor: " << armor << endl;
  cout << "Cost: " << cost << endl;
  cout << "Special Abilitly Piercing Shot" << endl;
  cout << endl << endl;
}
