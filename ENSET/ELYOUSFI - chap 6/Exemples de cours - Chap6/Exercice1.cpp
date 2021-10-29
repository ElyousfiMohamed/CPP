#include <iostream>
#include <conio.h>

using namespace std;

class vecteur {
    float x,y;
public :
    vecteur(float,float);
    void affiche();
    vecteur operator+ (vecteur);
    float operator*(vecteur);
    vecteur operator*(float);
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

vecteur vecteur::operator+(vecteur v) {
    vecteur res;
    res.x = v.x + x;
    res.y = v.y + y;
    return res;
}

float vecteur::operator*(vecteur v)
{
    return x*v.x + y*v.y;
}

vecteur vecteur::operator*(float h)
{
    vecteur res;
    res.x = x * h;
    res.y = y * h;
    return res;
}

int main()
{
    vecteur a(2,6),b(4,8),d,f;
    float c;
    c=a*b;
    printf("prod_scal(a,b) = %.2f",c);
    d= a * 3.5;
    d.affiche();
    //f= 3.5 * a; error : car l'opérateur n'est pas symetrique
    //f.affiche();
    getch();
    return 0;
}



