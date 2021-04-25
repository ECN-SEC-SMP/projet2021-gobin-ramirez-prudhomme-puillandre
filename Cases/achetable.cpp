#include "achetable.h"

//constructeur
achetable::achetable(string _nom, int position, int prix_achat): cases(_nom)
{
  this->position = position;
  this->prix_achat = prix_achat;
  this->proprietaire = nullptr;
}

//fonction
//Si la case n'a pas de propriétaire et le joueur assez d'argent, le propriétaire de la case devient le joueur
void achetable::acheter(joueur *J)
{
  if(this->proprietaire == nullptr)
  {
      if(J->achat(this))
    {
      this->proprietaire = J;
    }
  }
}

//accesseur
int achetable::getPrix_achat() const
{
  return this->prix_achat;
}

int achetable::getPosition() const
{
  return this->position;
}

joueur* achetable::getProprietaire() const
{
  return this->proprietaire;
}

//surchage
ostream& operator<<(ostream& os, const achetable& ach)
{
  if(ach.proprietaire == nullptr)
    os << ach.nom << " (cout : " << ach.prix_achat << " ) - sans proprietaire";
  else
    os << ach.nom << " (cout : " << ach.prix_achat << " ) proprietaire : " << ach.proprietaire->getNom();
  return os;
}