#include <iostream>
#include <conio.h>

using namespace std;

class point {
    int x,y;
public :
    point(int abs=0, int ord = 0) {
        x = abs;
        y = ord;
    }

    point symetrique();
    void affiche();
};

point point::symetrique() {
    point res;
    res.x = -x;
    res.y = -y;
    return res;
}

void point::affiche() {
    cout <<"Le point est en "<<x<<" et "<<y<<endl;
}
int main()
{
    point a,b(1,6);
    a=b.symetrique();
    a.affiche();
    b.affiche();
    getch();
    return 0;
}
