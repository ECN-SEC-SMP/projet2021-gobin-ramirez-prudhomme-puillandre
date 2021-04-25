#include "compagnie.h"

compagnie :: compagnie(string _nom, int _position, int _prix): achetable(_nom, _position, _prix)
{
}

int compagnie :: getLoyer(joueur *J) const
{
  //si le proprietaire tombe sur la case ou si la case n'a pas de proprietaire
  //le loyer est nul
  if(this -> proprietaire == nullptr || this -> proprietaire == J) {
    return 0;
  //valeur du loyer en fonction du nombre de compagnie du proprietaire, //en //multipliant un jet de dés 
  }else if (this->proprietaire->nbCompagnie() == 1) {
    return 4 * (rand()%12+1);
  }else {
    return 10 * (rand()%12+1);
  } 
}

/*
ostream& operator<<(ostream& os, const compagnie& co)
{
  joueur J=joueur("U");
  if(co.getProprietaire() == nullptr)
    os << co.getNom() << " (cout : " << co.getPrix_achat() << " ) - sans proprietaire";
  else
    os << co.getNom() << " (cout : " << co.getPrix_achat() << " ) proprietaire : " << co.getProprietaire()->getNom() << ", loyer = " << co.getLoyer(&J);
  return os;
}
*/