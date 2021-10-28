#include <iostream>
#include <conio.h>

using namespace std;

class point {
    int x,y;
public :
    point(int,int);
    void affiche();
    void affiche(char*);
};

point::point(int abs=0,int ord=0)
{
    x = abs;
    y = ord;
}

void point::affiche()
{
    cout << this->x << "," << this->y <<"\n";
}

int main()
{
    point c(3,12);
    c.affiche();
    getch();
    return 0;
}
