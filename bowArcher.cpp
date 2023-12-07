#include <iostream>
#include "bowArcher.h"

using namespace std;

bowArcher::bowArcher() : soilder(health=50, damage=15, stealth=100, armor=0, cost=5){};

void bowArcher::print() const
{
  cout << "Bow Archer" << endl;
  cout << "Health: " << health << endl;
  cout << "Damage: " << damage << endl;
  cout << "Stealth: " << stealth << endl;
  cout << "Armor: " << armor << endl;
  cout << "Cost: " << cost << endl;
  cout << "Special Abilitly Volley" << endl;
  cout << endl << endl;
}

