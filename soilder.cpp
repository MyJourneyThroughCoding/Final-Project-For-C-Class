#include <iostream>
#include "soilder.h"

using namespace std;

void soilder::setData(int heal, int dam, int steal, int arm, int c)
{
  health = heal;
  damage = dam;
  stealth = steal;
  armor = arm;
  cost = c;
}

int soilder::getHealth() const
{
  return health;
}

int soilder::getDamage() const
{
  return damage;
}

int soilder::getStealth() const
{
  return stealth;
}

int soilder::getArmor() const
{
  return armor;
}

int soilder::getCost() const
{
  return cost;
}

void soilder::print() const
{
  cout << "Health: " << health << endl;
  cout << "Damage: " << damage << endl;
  cout << "Stealth: " << stealth << endl;
  cout << "Armor: " << armor << endl;
  cout << "Cost: " << cost << endl;
}

soilder::soilder(int health, int damage, int stealth, int armor, int cost)
{
  setData(health, damage, stealth, armor, cost);
}
