#include "Bavarde.hpp"

Bavarde::Bavarde():Bavarde(0)
{
   // cout<<"Construction anonyme"<<endl;
}

Bavarde::Bavarde(int x)
{
    numero = x;
    cout<<"construction de"<<numero<<endl;
}

Bavarde::~Bavarde()
{
    std::cout<<"Tais-toi"<< numero << std::endl;
}

/*
void Bavarde::fonction(Bavarde b)
{
    std::cout<<"code de la fonction pour"<<b.getNumero()<<endl;
}

*/

int Bavarde::getNumero()
{
    return numero;
}

void Bavarde::afficher()
{
    cout << "Affichage de "<< getNumero() << endl;
}
