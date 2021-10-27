#include <iostream>
#include <conio.h>


using namespace std;

class hasard {
    int nbval,*val;
public :
    hasard(int,int);
    ~hasard();
    void affiche();
};

hasard::hasard(int nb,int mul) {
    int i;
    val = new int[nbval = nb];
    for(i=0;i<nbval;i++)
        val[i] = double(rand());
}

hasard::~hasard(){
    delete val;
}

void hasard::affiche() {
    int i;
    for(i = 0;i < nbval;i++)
        cout << val[i] <<" ";
    cout << endl;
}

int main()
{
    hasard suite1(15,5);
    suite1.affiche();
    getch();
    hasard suite2(6,12);
    suite2.affiche();
    getch();
    return 0;
}



