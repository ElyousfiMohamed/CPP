#include <iostream>
#include <conio.h>


using namespace std;

class point {
    int x;
    int y;
    int couleur;
public :
    void initialiser(int,int,int);
    void deplace(int,int);
    void afficher();
    void effacer();
};

void point::initialiser(int abs,int ord, int c)
{
    x = abs;
    y = ord;
    couleur = c;
}

void point::deplace(int dx,int dy){
    effacer();
    x += dx;
    y += dy;
    afficher();
}

void point::afficher() {
    cout << "je suis en " << x << " " << y << ", ma couleur est " << couleur << endl;
}

void point::effacer() {
    int aux = couleur;
    couleur = 0;
    afficher();
    couleur = aux;
}

int main()
{
    point p1,*p2;
    p1.initialiser(30,15,2);
    p1.afficher();
    getch();

    p1.effacer();
    p1.deplace(10,5);
    getch();

    p1.effacer();
    p2=new point;
    p2->initialiser(15,20,7);
    p2->afficher();
    delete p2;
    getch();

    return 0;
}



