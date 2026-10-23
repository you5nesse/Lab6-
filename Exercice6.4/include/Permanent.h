#ifndef PERMANENT_H
#define PERMANENT_H
#include<Employe.h>


class Permanent : public Employe {
private:
    float primeAnnuelle;

public:
    Permanent(string n, int i, float s, float prime)
        : Employe(n, i, s) {
        primeAnnuelle = prime;
    }

    void afficherInfos() override {
        cout << "--- Employe permanent ---" << endl;
        Employe::afficherInfos();
        cout << "Prime annuelle : "
             << primeAnnuelle << " DH" << endl;
    }
};

#endif // PERMANENT_H
