#ifndef achetable_def
#define achetable_def

#include <iostream>
#include <string>
#include "cases.h"
#include "../joueur.h"

class achetable: public cases
{
  public:
  achetable(string _nom, int _position, int prix_achat);
  void acheter(joueur *J);
  virtual int getLoyer() = 0;
  
  protected:
  int prix_achat;
  joueur *proprietaire;
};

#endif