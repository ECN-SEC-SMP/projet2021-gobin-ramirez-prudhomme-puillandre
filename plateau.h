#ifndef plateau_def
#define plateau_def

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "joueur.h"
#include "Cases/cases.h" 
#include "Cases/quartier.h"
#include "Cases/nonAchetable.h"
#include "Cases/gare.h"
#include "Cases/compagnie.h"
#include "Cases/caseDepart.h"

class plateau{
private:
  //vector<cases*> casesDuPlateau;
  cases* casesDuPlateau[40];
  vector<joueur*> joueursEnVie;
public:
  plateau(int nbJoueur);
  ~plateau();
  void initJoueur(int nombre );
  void initPlateau();
  void tourDeJeu(joueur);
  void affichagePlateau() const;
  bool finDePartie();

  int nbGare (joueur);
  
  int getDie();
  
};

#endif