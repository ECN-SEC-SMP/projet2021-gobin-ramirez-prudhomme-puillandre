#include "quartier.h"

//constructeur
quartier::quartier(string _nom, int _position, int _prix_achat): achetable(_nom, _position, _prix_achat)
{
  this->nbMaison = 0;
}

//renvoie le loyer du quartier en fonction de la distance au depart
int quartier::getLoyer(joueur *J) const 
{
  //si le proprietaire tombe sur la case ou si la case n'a pas de proprietaire
  //le loyer est nul
  if(this->proprietaire==nullptr || this->proprietaire==J)
    return 0;
  else
    //valeur du loyer en fonction du nombre de maison et
    //de la distance de la case a la case départ
    return (this->position*10)*this->nbMaison;
}

//accesseur
int quartier::getNbMaison() const
{
  return this->nbMaison;
}

//surcharge
/*
ostream& operator<<(ostream& os, const quartier& qua)
{
  joueur J=joueur("U");
  if(qua.getProprietaire() == nullptr)
    os << qua.getNom() << " (cout : " << qua.getPrix_achat() << " ) - sans proprietaire";
  else
    os << qua.getNom() << " (cout : " << qua.getPrix_achat() << " ) proprietaire : " << qua.getProprietaire()->getNom() <<", maisons = " << qua.getNbMaison() << ", loyer = " << qua.getLoyer(&J);
  return os;
}
*/