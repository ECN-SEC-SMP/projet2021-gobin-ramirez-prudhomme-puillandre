#ifndef quartier_def
#define quartier_def

#include "achetable.h"
<<<<<<< HEAD
=======
#include "../joueur.h"
>>>>>>> origin/master

class quartier: public achetable
{
  public:
<<<<<<< HEAD
  //constructeur
  quartier(string _nom, int _position, int _prix_achat);

  //fonction
  int getLoyer(joueur *J) const;
  
  //accesseur
  int getNbMaison() const;

  //surcharge
  //ostream& operator<<(ostream& os, const quartier& qua);
=======
  quartier(string _nom, int _position, int _prix_achat);

  int getLoyer();
>>>>>>> origin/master

  private:
  int nbMaison;
};

#endif