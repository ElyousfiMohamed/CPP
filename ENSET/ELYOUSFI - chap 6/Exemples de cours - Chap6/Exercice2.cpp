#include <iostream>
#include <conio.h>

using namespace std;

class liste {
    int taille;
    float *adr;
public :
    liste(int);
    liste(liste &);
    void saisie();
    void affiche();
    void operator=(liste &);
    float& operator[](int);
    ~liste();
};

liste::liste(int t)
{
    taille = t;
    adr = new float[taille];
    cout <<"contruction ... : adresse de l'objet : "<<this<<" adresse de la liste : "<<adr<<endl;
}

liste::~liste()
{
    cout <<"Destruction ... : adresse de l'objet : "<<this<<" adresse de la liste : "<<adr<<endl;
    delete adr;
}

liste::liste(liste &v)
{
    taille = v.taille;
    adr = new float[taille];
    for(int i=0;i<taille;i++)
        adr[i] = v.adr[i];

    cout << "\n Constructeur par recopie";
    cout << " Adresse de l'objet : "<<this;
    cout << " Adresse de liste : "<<adr<<endl;
}


void liste::saisie() {
    for(int i=0;i<taille;i++) {
        cout << "entrer un nombre : ";
        cin >> adr[i];
    }

}

void liste::affiche() {
    cout <<"adresse : "<<this<<endl;
    for(int i=0;i<taille;i++) {
        cout <<adr[i]<<" ";
    }
    cout << endl;
}

void liste::operator=(liste &lis) {
    int i;
    taille = lis.taille;
    delete adr;
    adr = new float[taille];
    for(i=0; i<taille; i++)
        adr[i] = lis.adr[i];
}

float& liste::operator[](int pos) {
    return adr[pos];
}
int main()
{
    cout <<"denut de main()"<<endl;
    liste a(5);
    liste b(2);
    a.saisie();
    a.affiche();
    b.saisie();
    b.affiche();
    b=a;
    b.affiche();
    a.affiche();
    cout <<"Fin de main()"<<endl;
    return 0;
}



