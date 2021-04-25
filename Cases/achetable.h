#ifndef achetable_def
#define achetable_def

#include "cases.h"
#include "../joueur.h"

class joueur;
class achetable: public cases
{
  public:
    //constructeur
    achetable(string _nom, int position, int prix_achat);
    
    //fonction
    void acheter(joueur *J);
    virtual int getLoyer();
    
    //accesseur
    int getPrix_achat() const;
    int getPosition() const;
    joueur* getProprietaire() const;

    //surcharge <<
    friend ostream& operator<<(ostream& os, const achetable& ach); 
  
  protected:
    int prix_achat;
    int position;
    joueur *proprietaire;
};

#endif