#include "cases.h"

//constructeur
cases::cases(string nom)
{
  this->nom = nom;
}

//accesseur
string cases::getNom() const
{
  return this->nom;
}

//surcharge
ostream& operator<<(ostream& os, const cases& ca)
{
  os << ca.nom;
  return os;
}