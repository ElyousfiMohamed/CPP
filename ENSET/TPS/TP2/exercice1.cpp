#include <iostream>
#include <conio.h>


using namespace std;

class point {
    int x;
    int y;
public :
    void initialiser(int,int);
    void deplace(int,int);
    void afficher();
    void effacer();
};

void point::initialiser(int abs,int ord)
{
    x = abs;
    y = ord;
}

void point::deplace(int dx,int dy){
    x += dx;
    y += dy;
    afficher();
}

void point::afficher() {
    cout << "je suis en " << x << " " << y << endl;
}

void point::effacer() {
    x = 0;
    y = 0;
    cout << "point supprimee ! " << endl;
}

int main()
{
    point p1,p2;
    p1.initialiser(8,9);
    p2.initialiser(9,10);

    p1.afficher();
    getch();
    p2.afficher();
    getch();

    p1.deplace(4,5);
    getch();
    p2.deplace(5,6);
    getch();

    p1.effacer();
    p2.effacer();

    p1.afficher();
    getch();
    p2.afficher();
    getch();
    return 0;
}



