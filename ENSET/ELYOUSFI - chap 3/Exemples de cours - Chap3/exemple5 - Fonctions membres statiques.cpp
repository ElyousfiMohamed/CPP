#include <iostream>
#include <conio.h>

using namespace std;

class compte_objet
{
    static int ctr;
    public:
    compte_objet();
    ~compte_objet() ;
    static void compte();
};
compte_objet :: compte_objet()
{
    cout << " ++constructicn : il y a maintenant "<< ++ctr <<" objets\n " ;
}

compte_objet :: ~compte_objet()
{
    cout << "--destruction : il y a maintenant " << --ctr
    << "objets\n " ;
}

void compte_objet :: compte()
{
    cout << "appel compte : il ya "<<ctr<<"objets\n";
}

int main() {
    void fonction();
    compte_objet::compte();
    compte_objet a;
    compte_objet::compte();
    fonction();
    compte_objet::compte();
    compte_objet b;
    compte_objet::compte();
    return 0;
}

void fonction()
{
    compte_objet u,v;
}
