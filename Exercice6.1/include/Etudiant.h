#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
using namespace std;
#include<Personne.h>
class Etudiant : public Personne{
     private:
         string niveau;

    public:
        Etudiant(string n, int a, string ni) : Personne(n, a) {

        niveau = ni;
        }
      void afficher(){
          Personne::afficher();
      cout<<"niveau : "<<niveau<<endl;
      }
    protected:


};

#endif // ETUDIANT_H
