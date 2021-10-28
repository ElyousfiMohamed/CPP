#include <iostream>
#include <conio.h>

using namespace std;

class point {
    int x,y;
public :
    point();
    point(int);
    point(int,int);
    void affiche();
    void affiche(char*);
};

point::point()
{
    x = 0;
    y = 0;
}

point::point(int abs)
{
    x = y = abs;
}

point::point(int abs,int ord)
{
    x = abs;
    y = ord;
}

void point::affiche()
{
    cout << x << "," << y <<"\n";
}

void point::affiche(char *message)
{
    cout <<message<<endl;
    affiche();
}

int main()
{
    point a;
    a.affiche();
    point b(5);
    b.affiche("point b");
    point c(3,12);
    c.affiche("point c");
    getch();
    return 0;
}
