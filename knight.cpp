#include <iostream>
#include "knight.h"

using namespace std;

knight::knight() : soilder(health=300, damage=50, stealth=0, armor=200, cost=60) {};

void knight::print() const
{
  cout << "Knight" << endl;
  cout << "Health: " << health << endl;
  cout << "Damage: " << damage << endl;
  cout << "Stealth: " << stealth << endl;
  cout << "Armor: " << armor << endl;
  cout << "Cost: " << cost << endl;
  cout << "Special Abilitly Health Regen" << endl;
  cout << endl << endl;
}
