#ifndef gare_def
#define gare_def

#include "achetable.h"
<<<<<<< HEAD
class joueur;
=======
#include "../joueur.h"
>>>>>>> origin/master

class gare: public achetable
{
  public:
<<<<<<< HEAD
  //constructeur
  gare(string _nom, int _position, int _prix_achat);
  
  //fonction
  int getLoyer(joueur *J) const;

  //surcharge
  //ostream& operator<<(ostream& os, const gare& ga);
=======
  gare(string _nom, int _position, int _prix_achat);
  int getLoyer();
>>>>>>> origin/master
};

#endif