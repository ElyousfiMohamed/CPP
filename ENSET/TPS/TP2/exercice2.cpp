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
    void Scene();
    Scene();
    return 0;
}

void Scene(){
    point u;
    u.initialiser(50,55);

    u.afficher();
    getch();

    u.deplace(10,5);
    getch();

    u.effacer();
    u.afficher();
    getch();
}


