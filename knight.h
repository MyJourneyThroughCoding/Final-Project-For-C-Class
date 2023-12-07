#ifndef H_knight
#define H_knight

#include <iostream>
#include "soilder.h"

using namespace std;

class knight : public soilder
{
  public:
    void print() const;

    knight();

  protected:
    int health;
    int damage;
    int stealth;
    int armor;
    int cost;
};
#endif
