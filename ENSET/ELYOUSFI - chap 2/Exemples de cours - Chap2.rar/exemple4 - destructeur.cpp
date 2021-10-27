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
    ~point();
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

point::~point() {
    cout <<"taper une touche pour continuer ... ";
    getch();
    cout <<"destrcution du point x ="<< x <<" y="<< y << endl;
}

void test() {
    point u(3,7);
    u.afficher();
    getch();
}
int main()
{
    point a(1,4);
    a.afficher();
    getch();
    point b(5,10);
    b.afficher();
    getch();
    test();
    return 0;
}



