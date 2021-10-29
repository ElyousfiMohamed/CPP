#include <iostream>
#include <conio.h>

using namespace std; //permet de s'affranchir de l'obligation de préfixer par std::.

int main()
{
    int n;
    char tc[30],c;
    float x;
    cout<<"Saisir un entier:";
    cin>>n;
    cout<<"Saisir un réel:";
    cin>>x;
    cout<<"Saisir une phrase:";
    cin>>tc;
    cout<<"Saisir une lettre:";
    cin>>c;
    cout<<"Affichage : "<<n<<" "<<x<<" "<<tc<<" "<<c<<"\n";
    /* conclusion : la langage c++ est plus avancé que c, on est pas besoin
    de specifier le type a cin, il detecte le type automatiquement*/
    getch() ;
}
