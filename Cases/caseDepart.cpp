#include "caseDepart.h"


//constructeur
caseDepart::caseDepart(string _nom): nonAchetable(_nom)
{

}

//Ici on renvoie true car on ne fait que ajouter de l'argent au joueur
bool caseDepart :: sonAction(joueur j) {
  j.ajouterArgent(200); // Lorsque un joueur passe par la case il gagne 200
  return true;
}