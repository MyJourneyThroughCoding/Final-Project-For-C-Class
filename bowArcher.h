#ifndef H_bowArcher
#define H_bowArcher

#include <iostream>
#include "soilder.h"

using namespace std;

class bowArcher : public soilder
{
  public:
    void print() const;

    bowArcher();

  protected:
    int health;
    int damage;
    int stealth;
    int armor;
    int cost;
};
#endif
