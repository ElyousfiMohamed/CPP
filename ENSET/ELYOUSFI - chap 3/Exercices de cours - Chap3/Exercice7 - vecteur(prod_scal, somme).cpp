#include <iostream>
#include <conio.h>

using namespace std;

class vecteur {
    float x,y;
public :
    vecteur(float,float);
    void affiche();
    float prod_scal(vecteur);
    vecteur somme(vecteur);
};

vecteur::vecteur(float abs = 0.,float ord = 0.)
{
    x = abs;
    y = ord;
}
void vecteur::affiche()
{
    cout << "x = "<<x<<" y = "<<y<<endl;
}

float vecteur::prod_scal(vecteur v)
{
    return x*v.x + y*v.y;
}

vecteur vecteur::somme(vecteur v)
{
    vecteur sum;
    sum.x = this->x + v.x;
    sum.y = this->y + v.y;
    return sum;
}
int main()
{
    vecteur a(7.2),b(8.9,6),c;
    a.affiche();
    getch();

    b.affiche();
    getch();

    cout<<endl;

    cout<< "produit scalaire de a et b = "<<a.prod_scal(b)<<endl;
    getch();

    c=a.somme(b);
    c.affiche();
    getch();
    return 0;
}
