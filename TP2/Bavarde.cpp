#include "Bavarde.hpp"

Bavarde::Bavarde():Bavarde(0)
{
    cout<<"Construction anonyme"<<endl;
}

Bavarde::Bavarde(int x)
{
    numero = x;
    cout<<"construction de"<<numero<<endl;
}

Bavarde::~Bavarde()
{
    std::cout<<"Tais-toi"<< n << std::endl;
}

void Bavarde::fonction(Bavarde b)
{
    
}

int Bavarde::getNumero()
{
    return 0;
}

void Bavarde::afficher()
{
    cout << "Affichage de "<< getNumero() << endl;
}
