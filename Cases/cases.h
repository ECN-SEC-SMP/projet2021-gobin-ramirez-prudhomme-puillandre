#ifndef cases_def
#define cases_def

#include <iostream>
#include <string>

//creation de la classe mere cases
class cases
{
  public:
  cases(string nom, int position);
  
  protected:
  string nom;
  int position;
};

#endif