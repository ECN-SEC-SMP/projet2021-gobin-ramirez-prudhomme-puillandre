#ifndef compagnie_def
#define compagnie_def

#include "achetable.h"

class compagnie: public achetable
{
  public:
  //constructeur
  compagnie(string _nom, int _position, int _prix_achat);
  //accesseur
  int getLoyer(joueur *J) const;
  //surcharge operateur
  //ostream& operator<<(ostream& os, const compagnie& co);
};

#endif