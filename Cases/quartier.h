#ifndef quartier_def
#define quartier_def

#include "achetable.h"

class quartier: public achetable
{
  public:
  //constructeur
  quartier(string _nom, int _position, int _prix_achat);

  //fonction
  int getLoyer(joueur *J) const;
  
  //accesseur
  int getNbMaison() const;

  //surcharge
  //ostream& operator<<(ostream& os, const quartier& qua);

  private:
  int nbMaison;
};

#endif