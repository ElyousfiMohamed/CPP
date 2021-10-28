#include <iostream>
#include <conio.h>

using namespace std;

class vecteur {
    float x,y;
public :
    vecteur(float,float);
    vecteur* homotethie(float);
    void affiche();
    float det(vecteur);
};

vecteur::vecteur(float abs = 0.,float ord = 0.)
{
    x = abs;
    y = ord;
}

vecteur* vecteur::homotethie(float val)
{
    vecteur *v = new vecteur;
    v->x = x*val;
    v->y = y*val;
    return v;
}

void vecteur::affiche()
{
    cout << "x = "<<x<<" y = "<<y<<endl;
}

float vecteur::det(vecteur v)
{
    return x*v.y - y*v.x;
}
int main()
{
    vecteur a,b(7.2),c(8.9,6);
    a.affiche();
    getch();
    b.affiche();
    getch();
    c.affiche();
    getch();
    cout<<endl;
    b=*b.homotethie(6);
    b.affiche();
    getch();
    cout<<endl;
    cout<< "determinant de b et c = "<<b.det(c)<<endl;
    getch();
    return 0;
}
