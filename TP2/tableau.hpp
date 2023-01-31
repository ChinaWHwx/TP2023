#ifndef _Tableau_hpp_
#define _Tableau_hpp_
#include <iostream>

using namespace std;

class Tableau {
    int i;
    int * tab;
    int taille;

 public:
    Tableau();
    ~Tableau();
    int Afficher();
};

#endif