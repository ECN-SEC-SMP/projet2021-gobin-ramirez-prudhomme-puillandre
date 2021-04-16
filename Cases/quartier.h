#ifndef quartier_def
#define quartier_def

#include "achetable.h"
#include "../joueur.h"

class quartier: public achetable
{
  public:
  quartier(string _nom, int _position, int _prix_achat);

  int getLoyer();

  private:
  int nbMaison;
};

#endif