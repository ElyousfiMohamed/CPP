#include <iostream>
#include <conio.h>


using namespace std;

class point {
    int x;
    int y;
public :
    point();
    void deplace(int,int);
    void afficher();
    void effacer();
};

point::point()
{
    x = 500;
    y = 700;
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
    point u;

    u.afficher();
    getch();

    u.deplace(10,5);
    getch();

    u.effacer();
    u.afficher();
    getch();
    return 0;
}



