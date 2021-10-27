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
};

point::point() {
    x = 20;
    y = 10;
}

void point::deplace(int dx,int dy){
    x += dx;
    y += dy;
}

void point::afficher() {
    cout << "je suis en " << x << " " << y << endl;
}

int main()
{
    point a,b;
    a.afficher();
    getch();
    a.deplace(17,10);
    a.afficher();
    getch();
    b.afficher();
    getch();

    return 0;
}



