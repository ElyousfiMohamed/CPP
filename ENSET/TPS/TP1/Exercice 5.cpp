#include <iostream>
#include <conio.h>

using namespace std;

void test(int n = 0,float x = 2.5)
{
    cout <<"Fonction N�1 : ";
    cout << "n= "<<n<<" x="<<x<<"\n";
}
void test(float x = 4.1,int n = 2)
{
    cout <<"Fonction N�2 : ";
    cout << "n= "<<n<<" x="<<x<<"\n";
}

int main()
{
int i = 5; float r = 3.2;
test(i,r); // fonction N�1
test(r,i); // fonction N�2
test(i); // fonction N�1
test(r); // fonction N�2
// les appels suivants, ambigu�s, sont rejet�s par le
// compilateur
// test();
// test (i,i);
// test (r,r);
// les initialisations par d�faut de x � la valeur 4.1
// et de n � 0 sont inutilisables
getch() ;
}

/* conclusion : le compilateur dans ces 3 cas test(), test (i,i) et test (r,r),
va etre confuser dans quel fonction il faut appeler */
