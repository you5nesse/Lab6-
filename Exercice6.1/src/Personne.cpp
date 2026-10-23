#include "Personne.h"
#include <iostream>

Personne::Personne(string n, int a)
{
    nom = n;   // correction : "nom = nom" -> "nom = n"
    age = a;
}

void Personne::afficher()
{
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;
}
