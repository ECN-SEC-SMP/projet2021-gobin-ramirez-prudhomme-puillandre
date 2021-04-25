#ifndef communaute_def
#define communaute_def

#include "nonAchetable.h"

class communaute: public nonAchetable
{
  public:
  //constructeur
  communaute();
  //accesseur
  int getEffet(joueur *J) const;
};

#endif