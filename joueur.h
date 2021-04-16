#ifndef joueur_def
#define joueur_def

#include <iostream>
#include <string>
#include "Cases/achetable.h"
using namespace std;

class joueur {
public:
  int nbgare(joueur J);
  string getNom();
  int getArgent();
  int getPosition();
  achetable[] getPropriete();
  bool payer(joueur J, int somme);
  bool achat(achetable aAcheter);
private:
  string nom;
  int argent;
  int position;
  achetable propriete[];
};

#endif