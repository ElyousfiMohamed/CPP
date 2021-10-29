#include <iostream>
#include <conio.h>

using namespace std;

void affiche(float x,int n=0)
{
    float result = 1;
    if(n == 0)
    {
        cout << x <<"^0 = "<< result <<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
            result = result * x;

        cout << x << "^" << n <<" = " << result <<endl;
    }
}

void affiche(int n,float x=0)
{
    float result = 1;
    if(x == 0)
    {
        cout << "0^"<< n <<" = 0" <<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
            result = result * x;

        cout << x << "^" << n <<" = " << result <<endl;
    }
}

int  main()
{
    int n1=8,n2=0;
    float x1 = 3.1,x2=0;
    affiche(n1);
    affiche(x1);
    affiche(x1,n1);
    affiche(n1,x1);
    affiche(x2,n2);
    affiche(n2,x2);
}
