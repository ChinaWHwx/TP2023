#include "Bavarde.hpp"
#include "Couple.hpp"
#include "Famille.hpp"

int main(int,char**){
    const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];
  // Combien d'instances sont créées ?

  for (int i =0; i < TAILLE; ++i) {
     tab1[i].afficher();
     tab2[i].afficher();
  }

  // Combien d'instances sont détruites ?

  delete[] tab2;
  Couple *c = new Couple;
  c->afficher();
  delete c;

  Famille f1(5);
  Famille f2(0);
  Famille f3(8);

  return 0;
}