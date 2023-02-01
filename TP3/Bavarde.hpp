#ifndef _Bavarde_hpp_
#define _Bavarde_hpp_
#include <iostream>

using namespace std;

class Bavarde {
    int numero;

 public:
    Bavarde();
    Bavarde(int);
    ~Bavarde();
    void fonction(Bavarde b);
    int getNumero();
    void afficher();
};




#endif