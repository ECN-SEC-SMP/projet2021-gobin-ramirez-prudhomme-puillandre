#include <iostream>
#include "achetable.h"
using namespace std;

achetable::achetable(string _nom, int _position, int prix_achat): cases(_nom, _position)
{
  this->prix_achat = prix_achat;
  this->proprietaire = nullptr;
}

void achetable::acheter(joueur *J)
{
  if(J->achat(this))
  {
    this->proprietaire = J;
  }
}