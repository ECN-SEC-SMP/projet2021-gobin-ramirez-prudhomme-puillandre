#include "gare.h"

//constructeur
gare::gare(string _nom, int _position, int _prix_achat): achetable(_nom, _position, _prix_achat)
{
}

//donne la valeur du loyer a payer
int gare::getLoyer(joueur *J) const
{
  //si le proprietaire tombe sur la case ou si la case n'a pas de proprietaire
  //le loyer est nul
  if(this->proprietaire==nullptr || this->proprietaire==J)
    return 0;
  else
    //valeur du loyer en fonction du nombre de gare du proprietaire
    return 50*this->proprietaire->nbGare();
}

//surcharge
/*
ostream& operator<<(ostream& os, const gare& ga)
{
  joueur J=joueur("U");
  if(ga.getProprietaire() == nullptr)
    os << ga.getNom() << " (cout : " << ga.getPrix_achat() << " ) - sans proprietaire";
  else
    os << ga.getNom() << " (cout : " << ga.getPrix_achat() << " ) proprietaire : " << ga.getProprietaire()->getNom() << ", loyer = " << ga.getLoyer(&J);
  return os;
}
*/