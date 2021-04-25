#ifndef gare_def
#define gare_def

#include "achetable.h"
class joueur;

class gare: public achetable
{
  public:
  //constructeur
  gare(string _nom, int _position, int _prix_achat);
  
  //fonction
  int getLoyer(joueur *J) const;

  //surcharge
  //ostream& operator<<(ostream& os, const gare& ga);
};

#endif