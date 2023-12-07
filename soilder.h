#ifndef H_soilder
#define H_soilder

#include <iostream>

using namespace std;

class soilder
{
  public:
    void setData(int heal=100, int dam=100, int steal=100, int arm=100, int c=100);
    int getHealth() const; 
    int getDamage() const;
    int getStealth() const;
    int getArmor() const;
    int getCost() const;
    virtual void print() const;

    soilder(int health=100, int damage=100, int stealth=100, int armor=100, int cost=100);

  protected:
    int health;
    int damage;
    int stealth;
    int armor;
    int cost;
};
#endif
