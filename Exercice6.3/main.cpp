#include <iostream>
#include<Produit.h>
#include<ProduitElectronique.h>
#include<ProduitAlimentaire.h>
using namespace std;

int main() {
    ProduitAlimentaire p1("Lait", 8.5, "30/10/2026");
    ProduitElectronique p2("Ordinateur", 6500, 2);

    p1.afficherInfos();

    cout << endl;

    p2.afficherInfos();

    return 0;
}
