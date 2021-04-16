#ifndef plateau_def
#define plateau_def

#include <iostream>
#include <string>
using namespace std;

#include "joueur.h"
#include "Cases/cases.h" 
#include "quartier.h"

class plateau{
private:
  cases casesDuPlateau[];
  joueur joueursEnVie[];
public:
  void initPlateau();
  void tourDejeu();
  void affichagePlateau();
  bool finDepartie();

  int nbGares (joueur);
  
  int getDie();
  
};

#endif