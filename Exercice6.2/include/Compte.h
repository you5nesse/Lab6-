#ifndef COMPTE_H
#define COMPTE_H
#include<iostream>
using namespace std;

class Compte
{
    protected:
        int numero;
        double solde;

    public:
        Compte(int n,double s){
        numero = n;
        solde = s;
        }
     void deposer(double montant) {
        if (montant > 0) {
            solde += montant;

        } else {
            cout << "Montant invalide." << endl;
        }
    }

    void retirer(double montant) {
        if (montant <= 0) {
            cout << "Montant invalide." << endl;
        } else if (montant > solde) {
            cout << "Solde insuffisant." << endl;
        } else {
            solde -= montant;
            cout << "Retrait effectue avec succes." << endl;
        }
    }

    void afficher() {
        cout << "Numero du compte : " << numero << endl;
        cout << "Solde : " << solde << " DH" << endl;
    }
};

#endif // COMPTE_H
