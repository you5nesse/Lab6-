#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<iostream>
using namespace std;

class Employe {
protected:
    string nom;
    int id;
    float salaireDeBase;

public:

    Employe(string n, int i, float s) {
        nom = n;
        id = i;
        salaireDeBase = s;
    }


    virtual void afficherInfos() {
        cout << "Nom : " << nom << endl;
        cout << "ID : " << id << endl;
        cout << "Salaire de base : "
             << salaireDeBase << " DH" << endl;
    }

    virtual ~Employe() {

    }
};
#endif // EMPLOYE_H
