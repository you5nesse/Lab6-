
#include <iostream>
#include "Compte.h"
#include "CompteEpargne.h"

using namespace std;

int main() {
    CompteEpargne c1(12345, 1000, 5);

    cout << "--- Etat initial ---" << endl;
    c1.afficher();

    cout << "\n--- Depot de 500 DH ---" << endl;
    c1.deposer(500);
    c1.afficher();

    cout << "\n--- Retrait de 200 DH ---" << endl;
    c1.retirer(200);
    c1.afficher();

    cout << "\n--- Calcul des interets ---" << endl;
    c1.afficherInteret();

    return 0;
}
