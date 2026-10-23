#include <iostream>
#include<Employe.h>
#include<Contractuel.h>
#include<Permanent.h>
using namespace std;


int main() {
    Employe** tab = new Employe*[4];

    tab[0] = new Permanent("Ahmed", 101, 5000.0f, 6000.0f);
    tab[1] = new Contractuel("Youssef", 102, 0.0f, 6, 80.0f);
    tab[2] = new Permanent("Sara", 103, 7000.0f, 9000.0f);
    tab[3] = new Contractuel("Amine", 104, 0.0f, 12, 100.0f);

    for (int i = 0; i < 4; i++) {
        tab[i]->afficherInfos();
    }

    for (int i = 0; i < 4; i++) {
        delete tab[i];
    }

    delete[] tab;

    return 0;
}
