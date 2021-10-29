#include <iostream>
#include <conio.h>


using namespace std;

class point {
    int x;
    int y;
public :
    point(int,int);
    void deplace(int,int);
    void afficher();
    void effacer();
};

point::point(int abs,int ord)
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
    point u(59,70);

    u.afficher();
    getch();

    u.deplace(10,5);
    getch();

    u.effacer();
    u.afficher();
    getch();
    return 0;
}



