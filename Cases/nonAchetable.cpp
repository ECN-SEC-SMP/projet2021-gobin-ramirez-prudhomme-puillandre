#include "nonAchetable.h"

//constructeur
nonAchetable::nonAchetable(string _nom): cases(_nom)
{
}

//Renvoie vrai car la carte n'a pas d'action
//Est surchargé et renvoie false si le joueur ne peut pas payer par exemple
bool nonAchetable :: sonAction(joueur j) {
  return true;
}