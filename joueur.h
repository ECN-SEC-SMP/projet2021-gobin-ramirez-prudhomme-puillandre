#ifndef joueur_def
#define joueur_def

#include <iostream>
#include <string>
#include "vector"
#include "Cases/achetable.h"
#include "Cases/gare.h"
#include "Cases/compagnie.h"

using namespace std;
class achetable;
class joueur {
public:
  joueur(string nom);
  ~joueur();
  int nbGare();
  int nbCompagnie();
  string getNom() const;
  int getArgent() const;
  int getPosition() const;
  vector<achetable> getPropriete();
  bool payer(joueur J, int somme);
  bool achat(achetable aAcheter);
  int ajouterArgent(int somme);

private:
  string nom;
  int argent;
  int position;
  vector<achetable> propriete;

};

#endif