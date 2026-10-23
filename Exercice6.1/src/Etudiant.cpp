#include "Etudiant.h"
#include <iostream>

Etudiant::Etudiant(string n, int a, string ni) : Personne(n, a)
{
    niveau = ni;
}

void Etudiant::afficher()
{
    Personne::afficher();
    cout << "Niveau : " << niveau << endl;
}
