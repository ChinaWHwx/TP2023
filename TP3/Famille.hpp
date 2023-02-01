#ifndef _Famille_hpp_
#define _Famille_hpp_
#include "Bavarde.hpp"

class Famille{
    Bavarde * membres;

    public:
    Famille(int taille);
    ~Famille();
};

#endif