#include <iostream>
#include <conio.h>

using namespace std;

class point {
    int x,y;
public :
    point()
    {
        x = 0;
        y = 0;
    }

    point(int abs)
    {
        x = y = abs;
    }

    point(int abs,int ord)
    {
        x = abs;
        y = ord;
    }

    void affiche();
};

void point::affiche()
{
    cout << x << "," << y <<"\n";
}
int main()
{
    point a,b(5);
    a.affiche();
    b.affiche();
    point c(3,12);
    c.affiche();
    getch();
    return 0;
}
