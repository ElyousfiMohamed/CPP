#include <iostream>

using namespace std;
struct complexe
{
    double reel,im;
};
void affiche(int);
void affiche(double);
void affiche(complexe);

int main()
{
    int a=5;
    double b =0.0;
    complexe c = {1.0,-1.0};
    affiche(a);
    affiche(b);
    affiche(c);
    return 0;
}

void affiche(int i)
{
    cout << "TYPE de varialbe (int) : "<<endl;
    cout <<"valeur : "<<i <<endl;
}

void affiche(double d)
{
    cout << "TYPE de varialbe (double) : "<<endl;
    cout <<"valeur : "<<d <<endl;
}


void affiche(complexe c)
{
    cout << "TYPE de varialbe (complexe) : "<<endl;
    cout <<"valeur : "<<c.reel <<endl;
    cout <<"valeur : "<<c.im <<endl;
}
