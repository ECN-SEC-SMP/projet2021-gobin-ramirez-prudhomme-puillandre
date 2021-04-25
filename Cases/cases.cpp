#include "cases.h"
<<<<<<< HEAD

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
=======
#include <iostream>
using namespace std;

cases::cases(string nom, int position)
{
  this->nom = nom;
  this->position = position;
}

>>>>>>> origin/master
