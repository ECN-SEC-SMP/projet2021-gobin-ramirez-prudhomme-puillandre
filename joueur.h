#ifndef joueur_def
#define joueur_def

#include <iostream>
#include <string>
<<<<<<< HEAD
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

=======
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
>>>>>>> origin/master
private:
  string nom;
  int argent;
  int position;
<<<<<<< HEAD
  vector<achetable> propriete;

=======
  achetable propriete[];
>>>>>>> origin/master
};

#endif