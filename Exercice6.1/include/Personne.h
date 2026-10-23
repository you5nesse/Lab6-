#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
using namespace std;
#include <iostream>
class Personne
{
    private:
      string nom;
      int age;

    public:
        Personne(string n,int a){
        nom = n;
        age = a;
        }
      void afficher(){
          cout << "Nom : " << nom << endl;
          cout << "Age : " << age << endl;
      }




};

#endif // PERSONNE_H
