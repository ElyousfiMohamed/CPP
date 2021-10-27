#include <iostream>

using namespace std;

struct point {
    int x;
    int y;
    void initailise(int,int);
    void deplace(int,int);
    void affiche();
};

void point::initailise(int abs,int ord){
    x = abs;
    y = ord;
}

void point::deplace(int dx,int dy){
    x += dx;
    y += dy;
}

void point::affiche() {
    cout << "je suis en " << x << " " << y << endl;
}

int main()
{
    struct point p;
    p.initailise(5,2);
    p.deplace(2,2);
    p.affiche();
    return 0;
}
