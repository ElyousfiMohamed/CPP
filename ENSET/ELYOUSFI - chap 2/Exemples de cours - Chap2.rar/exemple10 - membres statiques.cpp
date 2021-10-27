#include <iostream>
#include <conio.h>


using namespace std;

class Compteur {
    static int ctr = 0;
public :
    Compteur();
    ~Compteur();
};

Compteur::Compteur() {
    cout << "un nouvel objet vient de se créer : " <<endl;
    cout << "il y a maintenant : "<< ++ctr << " objets";
    getch();
}

Compteur::~Compteur(){
    cout <<"un objet vient de se détruire " << endl;
    cout <<"il reste maintenant : " << --ctr << " objets";
    getch();
}

int main()
{
    void Essai();
    Compteur a;
    Essai();
    Compteur b;
    return 0;
}

void Essai(){
    Compteur u,v;
}

