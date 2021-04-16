#include "plateau.h"

void plateau :: initPlateau() {
  this->casesDuPlateau[0] = nonAchetable("Case Départ");
  this->casesDuPlateau[1] = quartier("Boulevard de Belleville",1);
  this->casesDuPlateau[2] = nonAchetable("Caisse de communauté");
  this->casesDuPlateau[3] = quartier("Rue Lecourbe",3);
  this->casesDuPlateau[4] = nonAchetable("Impots sur le revenu");
  this->casesDuPlateau[5] = gare("Gare de montparnasse");
  this->casesDuPlateau[6] = quartier("Rue de Vaugirard",6);
  this->casesDuPlateau[8] = quartier("Rue des Courcelles",8);
  this->casesDuPlateau[9] = quartier("Avenue de la République",9);
  this->casesDuPlateau[11] = quartier("Boulevard de la Villette",11);
  this->casesDuPlateau[13] = quartier("Avenue de Neuilly",13);
  this->casesDuPlateau[16] = quartier("Avenue de Mozart",16);
  this->casesDuPlateau[18] = quartier("Boulevard Saint-Michel",18);
  this->casesDuPlateau[19] = quartier("Place Pigalle",19);
  this->casesDuPlateau[21] = quartier("Avenue Matignon",21);
  this->casesDuPlateau[14] = quartier("Rue de Paradis",14);
  this->casesDuPlateau[23] = quartier("Boulevard Malesherbes",23);
  this->casesDuPlateau[24] = quartier("Avenue Henri-Martin",24);
  this->casesDuPlateau[26] = quartier("Faubourg Saint-Honoré",26);
  this->casesDuPlateau[27] = quartier("Place de la Bourse",27);
  this->casesDuPlateau[29] = quartier("Rue La Fayette",29);
  this->casesDuPlateau[31] = quartier("Avenue de Breteuil",31);
  this->casesDuPlateau[32] = quartier("Avenue Foch",32);
  this->casesDuPlateau[34] = quartier("Boulevard des Capucines",34);
  this->casesDuPlateau[37] = quartier("Avenue des Champs-Élysées",37);
  this->casesDuPlateau[39] = quartier("Rue de la Paix",39);
}









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