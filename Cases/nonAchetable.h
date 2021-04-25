#ifndef nonachetable_def
#define nonachetable_def

#include "cases.h"
#include "../joueur.h"

class nonAchetable: public cases
{
  public:
  //constructeur
  nonAchetable(string _nom);

  bool sonAction(joueur j);
};

#endif