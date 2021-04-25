#include "quartier.h"

<<<<<<< HEAD
//constructeur
=======

>>>>>>> origin/master
quartier::quartier(string _nom, int _position, int _prix_achat): achetable(_nom, _position, _prix_achat)
{
  this->nbMaison = 0;
}

//renvoie le loyer du quartier en fonction de la distance au depart
<<<<<<< HEAD
int quartier::getLoyer(joueur *J) const 
{
  //si le proprietaire tombe sur la case ou si la case n'a pas de proprietaire
  //le loyer est nul
  if(this->proprietaire==nullptr || this->proprietaire==J)
    return 0;
  else
    //valeur du loyer en fonction du nombre de maison et
    //de la distance de la case a la case départ
    return (this->position*10)*this->nbMaison;
}

//accesseur
int quartier::getNbMaison() const
{
  return this->nbMaison;
}

//surcharge
/*
ostream& operator<<(ostream& os, const quartier& qua)
{
  joueur J=joueur("U");
  if(qua.getProprietaire() == nullptr)
    os << qua.getNom() << " (cout : " << qua.getPrix_achat() << " ) - sans proprietaire";
  else
    os << qua.getNom() << " (cout : " << qua.getPrix_achat() << " ) proprietaire : " << qua.getProprietaire()->getNom() <<", maisons = " << qua.getNbMaison() << ", loyer = " << qua.getLoyer(&J);
  return os;
}
=======
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
>>>>>>> origin/master
*/