#ifndef PRODUITALIMENTAIRE_H
#define PRODUITALIMENTAIRE_H
#include<Produit.h>

class ProduitAlimentaire : public Produit {
private:
    string dateExpiration;

public:
    ProduitAlimentaire(string n, double p, string date)
        : Produit(n, p) {
        dateExpiration = date;
    }

    void afficherInfos() override {
        cout << "--- Produit alimentaire ---" << endl;
        Produit::afficherInfos();
        cout << "Date d'expiration : "
             << dateExpiration << endl;
    }
};

#endif // PRODUITALIMENTAIRE_H
