#ifndef cases_def
#define cases_def

#include <iostream>
#include <string>
using namespace std;

//creation de la classe mere cases
class cases
{
  public:
  //constructeur
  cases(string nom);

  //accesseur
  string getNom() const;
  
  //surcharge de <<
  friend ostream& operator<<(ostream& os, const cases& ca); 
  
  protected:
  string nom;
};

#endif