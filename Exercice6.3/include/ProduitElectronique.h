#ifndef PRODUITELECTRONIQUE_H
#define PRODUITELECTRONIQUE_H
#include<Produit.h>

class ProduitElectronique : public Produit {
private:
    int garantie; // Duree en annees

public:
    ProduitElectronique(string n, double p, int g)
        : Produit(n, p) {
        garantie = g;
    }

    void afficherInfos() override {
        cout << "--- Produit electronique ---" << endl;
        Produit::afficherInfos();
        cout << "Garantie : " << garantie
             << " ans" << endl;
    }
};

#endif // PRODUITELECTRONIQUE_H
