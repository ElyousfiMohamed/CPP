#include <iostream>
#include <conio.h>

using namespace std;

class point {
    int x,y;
public :
    point(int abs=0,int ord=0)
    {
        x = abs;
        y = ord;
    }
    void affiche();
};



void point::affiche()
{
    cout <<"adresse"<<this<<" - coordonnees : "<< x << "," << y <<"\n";
}

int main()
{
    point a(5),b(3,15);
    a.affiche();
    b.affiche();
    getch();
    return 0;
}
