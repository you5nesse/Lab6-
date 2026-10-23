#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include<Compte.h>

class CompteEpargne : public Compte{
    private:
        double tauxInteret;

    public:
        CompteEpargne(int n,double s,double tI):Compte(n,s){
           tauxInteret = tI;
        }
        double calculerInteret(){
            return solde * tauxInteret / 100;
        }


     void afficherInteret() {
        cout << "Taux d'interet : "
             << tauxInteret << "%" << endl;

        cout << "Interet gagne : "
             << calculerInteret() << " DH" << endl;
    }

};

#endif // COMPTEEPARGNE_H
