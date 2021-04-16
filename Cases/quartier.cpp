#include "quartier.h"


quartier::quartier(string _nom, int _position, int _prix_achat): achetable(_nom, _position, _prix_achat)
{
  this->nbMaison = 0;
}

//renvoie le loyer du quartier en fonction de la distance au depart
int quartier::getLoyer()
{
  return 0; //a faire
}

/*
quartier::quartier(string nom, int position){
  this->type = ("Boulevard de Belleville",1);
  this->type = ("Rue Lecourbe",3);
  this->type = ("Rue de Vaugirard",6);
  this->type = ("Rue des Courcelles",8);
  this->type = ("Avenue de la République",9);
  this->type = ("Boulevard de la Villette",11);
  this->type = ("Avenue de Neuilly",13);
  this->type = ("Rue de Paradis",14);
  this->type = ("Avenue de Mozart",16;
  this->type = ("Boulevard Saint-Michel",18);
  this->type = ("Place Pigalle",19);
  this->type = ("Avenue Matignon",21);
  this->type = ("Boulevard Malesherbes",23);
  this->type = ("Avenue Henri-Martin",24);
  this->type = ("Faubourg Saint-Honoré",26);
  this->type = ("Place de la Bourse",27);
  this->type = ("Rue La Fayette",29);
  this->type = ("Avenue de Breteuil",31);
  this->type = ("Avenue Foch",32);
  this->type = ("Boulevard des Capucines",34);
  this->type = ("Avenue des Champs-Élysées",37);
  this->type = ("Rue de la Paix",39);
  
};
*/