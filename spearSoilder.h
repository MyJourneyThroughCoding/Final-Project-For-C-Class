#ifndef H_spearSoilder
#define H_spearSoilder

#include <iostream>
#include "soilder.h"

using namespace std;

class spearSoilder : public soilder
{
  public:
    void print() const;

  spearSoilder();

  protected:
    int health;
    int damage;
    int stealth;
    int armor;
    int cost;
};
#endif
