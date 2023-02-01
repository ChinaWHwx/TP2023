#include "Couple.hpp"

Couple::Couple():a(Bavarde(1)),b(Bavarde(2))
{
    cout<<"New Couple"<<endl;
}

Couple::Couple(int x,int y)
{
    a=x;
    b=y;
}

Couple::~Couple()
{
    cout<<"Delete Couple"<<endl;
}

int Couple::getNumeroA(){
    return a.getNumero();
}

int Couple::getNumeroB(){
    return b.getNumero();
}

void Couple::afficher()
{
    cout<<"Couple:"<<getNumeroA()<<"-"<<getNumeroB()<<endl;
}
