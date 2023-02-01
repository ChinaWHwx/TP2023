#ifndef _Couple_hpp_
#define _Couple_hpp_
#include "Bavarde.hpp"

class Couple
{
private:
    Bavarde a;
    Bavarde b;
public:
    Couple();
    Couple(int,int);
    ~Couple();
    int getNumeroA();
    int getNumeroB();
    void afficher();
};



#endif 