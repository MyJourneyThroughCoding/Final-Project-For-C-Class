#ifndef H_crossbowArcher
#define H_crossbowArcher

#include <iostream>
#include "soilder.h"

using namespace std;

class crossbowArcher : public soilder
{
  public:
    void print() const;

    crossbowArcher();

  protected:
    int health;
    int damage;
    int stealth;
    int armor;
    int cost;
};
#endif
