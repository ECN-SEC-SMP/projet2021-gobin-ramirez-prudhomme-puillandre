#ifndef caseDepart_def
#define caseDepart_def

#include "nonAchetable.h"
#include "../joueur.h"

class caseDepart: public nonAchetable
{
  public:
    caseDepart(string _nom);

    bool sonAction(joueur j);
};

#endif