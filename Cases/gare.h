#ifndef gare_def
#define gare_def

#include "achetable.h"
#include "../joueur.h"

class gare: public achetable
{
  public:
  gare(string _nom, int _position, int _prix_achat);
  int getLoyer();
};

#endif