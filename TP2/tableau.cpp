#include "tableau.hpp"

using namespace std;

const int TAILLE = 10;

Tableau::Tableau():tab(nullptr),taille(10)
{
    tab = new int[taille];
}

Tableau::~Tableau()
{
    if(tab) //
    delete [] tab;
}

int Tableau::Afficher()
{
    for (int i = 0; i < TAILLE; i++)
    {
        tab[i]=i;
        cout<<"tab["<<tab[i]<<"]"<<"is"<<i<<endl;
    }

    return i;
}
