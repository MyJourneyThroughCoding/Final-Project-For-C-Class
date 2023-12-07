#include <iostream>
#include "spearSoilder.h"

using namespace std;

spearSoilder::spearSoilder() : soilder(health=100, damage=35, stealth=50, armor=100, cost=10) {};

void spearSoilder::print() const
{
  cout << "Spear Soilder" << endl;
  cout << "Health: " << health << endl;
  cout << "Damage: " << damage << endl;
  cout << "Stealth: " << stealth << endl;
  cout << "Armor: " << armor << endl;
  cout << "Cost: " << cost << endl;
  cout << "Special Abilitly Spear Rush" << endl;
  cout << endl << endl;
}
