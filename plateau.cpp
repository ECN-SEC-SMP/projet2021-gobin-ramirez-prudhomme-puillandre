#include "plateau.h"

plateau::plateau(int nbJoueur)
{
  plateau::initPlateau();
  plateau::initJoueur(nbJoueur);
}

void plateau :: initPlateau()
{
  this->casesDuPlateau[0] = new caseDepart("Case Départ");
  this->casesDuPlateau[1] = new quartier("Boulevard de Belleville",1,60);
  this->casesDuPlateau[2] = new nonAchetable("Caisse de communauté");
  this->casesDuPlateau[3] = new quartier("Rue Lecourbe",2,60);
  this->casesDuPlateau[4] = new nonAchetable("Impots sur le revenu");
  this->casesDuPlateau[5] = new gare("Gare de montparnasse",3,200);
  this->casesDuPlateau[6] = new quartier("Rue de Vaugirard",4,100);
  this->casesDuPlateau[7] = new nonAchetable("Chance");
  this->casesDuPlateau[8] = new quartier("Rue des Courcelles",5,100);
  this->casesDuPlateau[9] = new quartier("Avenue de la République",6,120);
  this->casesDuPlateau[10] = new nonAchetable("Prison");
  this->casesDuPlateau[11] = new quartier("Boulevard de la Villette",7,140);
  this->casesDuPlateau[12] = new compagnie("Compagnie de distribution d'électricité",8,150);
  this->casesDuPlateau[13] = new quartier("Avenue de Neuilly",9,140);
  this->casesDuPlateau[14] = new quartier("Rue de Paradis",10,160);
  this->casesDuPlateau[15] = new gare("Gare de Lyon",11,200);
  this->casesDuPlateau[16] = new quartier("Avenue de Mozart",12,180);
  this->casesDuPlateau[17] = new nonAchetable("Caisse de communauté");
  this->casesDuPlateau[18] = new quartier("Boulevard Saint-Michel",13,180);
  this->casesDuPlateau[19] = new quartier("Place Pigalle",14,200);
  this->casesDuPlateau[20] = new nonAchetable("Parc gratuit");
  this->casesDuPlateau[21] = new quartier("Avenue Matignon",15,220);
  this->casesDuPlateau[22] = new nonAchetable("Chance");
  this->casesDuPlateau[23] = new quartier("Boulevard Malesherbes",16,220);
  this->casesDuPlateau[24] = new quartier("Avenue Henri-Martin",17,240);
  this->casesDuPlateau[25] = new gare("Gare du Nord",18,200);
  this->casesDuPlateau[26] = new quartier("Faubourg Saint-Honoré",19,260);
  this->casesDuPlateau[27] = new quartier("Place de la Bourse",20,260);
  this->casesDuPlateau[28] = new compagnie("Compagnie de distribution des eaux",21,150);
  this->casesDuPlateau[29] = new quartier("Rue La Fayette",22,280);
  this->casesDuPlateau[30] = new nonAchetable("Allez en prison !!!!");
  this->casesDuPlateau[31] = new quartier("Avenue de Breteuil",23,300);
  this->casesDuPlateau[32] = new quartier("Avenue Foch",24,300);
  this->casesDuPlateau[33] = new nonAchetable("Caisse de communauté");
  this->casesDuPlateau[34] = new quartier("Boulevard des Capucines",25,320);
  this->casesDuPlateau[35] = new gare("Gare Saint-Lazare",26,200);
  this->casesDuPlateau[36] = new nonAchetable("Chance");
  this->casesDuPlateau[37] = new quartier("Avenue des Champs-Élysées",27,350);
  this->casesDuPlateau[38] = new nonAchetable("Taxe de luxe");
  this->casesDuPlateau[39] = new quartier("Rue de la Paix",28,400);
}

void plateau :: tourDeJeu(joueur j) {

  int avancementDe = this->getDie();
  
  int nouvellePosition = (j.getPosition() + avancementDe)%40 ; //La nouvelle position reste entre 0 et 39

  // Si de type achetable
  cases caseSuivante = this->casesDuPlateau[nouvellePosition];
  if (this->casesDuPlateau[nouvellePosition] typeof achetable) {
    // Si impair
    if (avancementDe%2)
    { 
      ((achetable) caseSuivante).acheter(j);
    }


  }
}

/*

    When the C-style cast expression is encountered, the compiler attempts the following cast expressions, in this order:

    a) const_cast(expression)

    b) static_cast(expression), with extensions: pointer or reference to a derived class is additionally allowed to be cast to pointer or reference to unambiguous base class (and vice versa) even if the base class is inaccessible (that is, this cast ignores the private inheritance specifier). Same applies to casting pointer to member to pointer to member of unambigous non-virtual base

    c) static_cast (with extensions) followed by const_cast

    d) reinterpret_cast(expression)

    e) reinterpret_cast followed by const_cast

    The first choice that satisfies the requirements of the respective cast operator is selected, even if it cannot be compiled
*/

//on affiche uniquement les cases ou se trouve les joueurs
void plateau::affichagePlateau() const
{
  int pos = 0;
  for(int i; i<4; i++)
  {
    pos = this->joueursEnVie[i]->getPosition();
    cout << this->joueursEnVie[pos]->getNom() <<" est sur la case : " << this->casesDuPlateau[i];
  }
}

bool plateau::finDePartie()
{
 return(this-> joueursEnVie.size() == 1);
}

int nbGares (joueur j)
{
  return j.nbGare();
}

// return un nombre entre 1 et 12 (2 dés)
int plateau :: getDie()
{
  return rand()%6+1 + rand()%6+1;
}

void plateau :: initJoueur(int nombre = 4)
{
  for(int i = 0; i<nombre; i++)
  { 
    string J = ("J" + to_string(i));
    this->joueursEnVie.push_back(new joueur(J));
  }
<<<<<<< HEAD
}
=======
}
>>>>>>> origin/master
