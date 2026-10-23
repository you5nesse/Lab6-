#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H
#include<Employe.h>


class Contractuel : public Employe {
private:
    int dureeContrat;
    float tauxHoraire;

public:

    Contractuel(string n, int i, float s,
                int duree, float taux)
        : Employe(n, i, s) {
        dureeContrat = duree;
        tauxHoraire = taux;
    }

    float calculerSalaireMensuel(int heures) {
        return heures * tauxHoraire;
    }

    void afficherInfos() override {
        cout << "--- Employe contractuel ---" << endl;
        Employe::afficherInfos();
        cout << "Duree du contrat : "
             << dureeContrat << " mois" << endl;
        cout << "Taux horaire : "
             << tauxHoraire << " DH/heure" << endl;
    }
};


#endif // CONTRACTUEL_H
