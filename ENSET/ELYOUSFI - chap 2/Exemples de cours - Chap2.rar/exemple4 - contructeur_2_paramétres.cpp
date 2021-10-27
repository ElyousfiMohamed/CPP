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
};

point::point(int abs,int ord) {
    x = abs;
    y = ord;
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
    point a(20,10),b(30,20);
    a.afficher();
    getch();
    a.deplace(17,10);
    a.afficher();
    getch();
    b.afficher();
    getch();

    return 0;
}



