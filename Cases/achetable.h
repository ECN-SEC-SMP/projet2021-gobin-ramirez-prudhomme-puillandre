#ifndef achetable_def
#define achetable_def

<<<<<<< HEAD
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
=======
#include <iostream>
#include <string>
#include "cases.h"
#include "../joueur.h"

class achetable: public cases
{
  public:
  achetable(string _nom, int _position, int prix_achat);
  void acheter(joueur *J);
  virtual int getLoyer() = 0;
  
  protected:
  int prix_achat;
  joueur *proprietaire;
>>>>>>> origin/master
};

#endif