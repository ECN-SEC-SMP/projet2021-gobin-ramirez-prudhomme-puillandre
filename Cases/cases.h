#ifndef cases_def
#define cases_def

#include <iostream>
#include <string>
<<<<<<< HEAD
using namespace std;
=======
>>>>>>> origin/master

//creation de la classe mere cases
class cases
{
  public:
<<<<<<< HEAD
  //constructeur
  cases(string nom);

  //accesseur
  string getNom() const;
  
  //surcharge de <<
  friend ostream& operator<<(ostream& os, const cases& ca); 
  
  protected:
  string nom;
=======
  cases(string nom, int position);
  
  protected:
  string nom;
  int position;
>>>>>>> origin/master
};

#endif