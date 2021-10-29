#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class chaine {
    int longu;
    char *adr;
public :
    chaine();
    chaine(char *);
    chaine(chaine &);
    void operator=(chaine &);
    int operator==(chaine &);
    void operator+(chaine &);
    char& operator[](int);
    void affiche();
};

chaine::chaine()
{
    longu = 1;
    adr = new char[longu];
    *adr=' ';
}

chaine::chaine(char* t)
{
    longu = strlen(t);
    adr = new char[longu];
    strcpy(adr,t);
}

chaine::chaine(chaine &v)
{
    longu = v.longu;
    adr = new char[longu];
    strcpy(adr,v.adr);
}


void chaine::affiche()
{
    cout << adr <<endl;
}


void chaine::operator=(chaine &ch) {
    longu = ch.longu;
    adr = new char[longu];
    strcpy(adr,ch.adr);
}

int chaine::operator ==(chaine &ch) {
    return !strcmp(adr,ch.adr);
}

void chaine::operator+(chaine &ch) {
    strcat(adr," ");
    strcat(adr,ch.adr);
}

char& chaine::operator[](int pos) {
    return adr[pos];
}


int main()
{
    cout <<"debut de main()\n"<<endl;
    chaine a("bonjour");
    chaine b("mohamed");
    a.affiche();
    b.affiche();
    chaine c;
    a + b;
    c = a;
    c.affiche();

    chaine d("bonjour");
    chaine e("bonjour");

    if(d == e)
        cout << "egaux" <<endl;
    else
        cout << "pas egaux" <<endl;


    chaine f("bon");
    chaine g("bonjour");

    if(f == g)
        cout << "egaux" <<endl;
    else
        cout << "pas egaux" <<endl;
    cout <<"\n\nFin de main()"<<endl;
    return 0;
}



