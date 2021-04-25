#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "joueur.h"
using namespace std;


joueur::joueur(string nom){
  this -> argent = 1500;
  this -> position = 0;
}

//Permet d'obtenir le nombre de gare d'un utilisateur
int joueur :: nbGare() 
{
  int counter = 0;
  for(int i = 0; i < this -> propriete.size() ; i++) { // parcourt la liste de propiete du joueur
    if (typeid(this->propriete).name == gare) {
      counter ++;
    }
  }
  return counter;
}

// Nombre de compagnie du joueur
int joueur :: nbCompagnie() 
{
  int counter = 0;
  for(int i = 0; i < this -> propriete.size() ; i++) {
    if (typeid(this->propriete).name == compagnie) {
      counter ++;
    }
  }
  return counter;
}

// Get
string joueur :: getNom() const
{
  return this -> nom;
}

int joueur :: getArgent() const
{
  return this -> argent;
}

int joueur :: getPosition() const
{
  return this -> position;
}
vector<achetable> joueur :: getPropriete() 
{
  return  this -> propriete;
}

// Permet de faire le payement d'un joueur à un autre
bool joueur :: payer(joueur J, int somme) 
{
  if ((this -> argent) < somme) { // Si le joueur n'a pas assez d'argent
    return false;
  } else {
    this -> argent -= somme; // On retire l'argent
    J.ajouterArgent(somme); // On ajoute l'argent au deuxieme joueur
    return true;
  }
}

//permet d'acheter une propriete
bool joueur :: achat(achetable aAcheter)
{
  // Il faut verifier si la case est achetable avant (pas de propriétaire)
  if (aAcheter.getProprietaire() != nullptr) {
    return false;
  }
  // Si on a pas assez d'agent
  if ((this -> argent) < (aAcheter.getPrix_achat())) { 
    return false;
  } else { // sinon
    this -> propriete.push_back(aAcheter); //On ajoute la propriete
    this->argent -= aAcheter.getPrix_achat() ; // on retire l'argent
    return true;
  }
}

int joueur :: ajouterArgent(int somme){
  // Pas besoin de precondition
  this->argent += somme;
}
