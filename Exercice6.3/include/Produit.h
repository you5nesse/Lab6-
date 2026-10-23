#ifndef PRODUIT_H
#define PRODUIT_H
#include <iostream>
#include <string>
using namespace std;
class Produit
{
    protected:
        string nom;
        double prix;

    public:
      Produit(string n, double p) {
        nom = n;
        prix = p;
    }

    virtual void afficherInfos() {
        cout << "Nom : " << nom << endl;
        cout << "Prix : " << prix << " DH" << endl;
    }

    virtual ~Produit() {}
};

#endif // PRODUIT_H
