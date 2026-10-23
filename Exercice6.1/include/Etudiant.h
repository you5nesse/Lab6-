#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include "Personne.h"
using namespace std;

class Etudiant : public Personne
{
    private:
        string niveau;

    public:
        Etudiant(string n, int a, string ni);
        void afficher();
};

#endif // ETUDIANT_H
