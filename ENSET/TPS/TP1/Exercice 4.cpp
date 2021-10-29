#include <iostream>
#include <math.h>

using namespace std;
//fontion qui calcul puissance nieme, par default la puissance est 4

double puissance(double X,int n = 4)
{
    double result = 1;

    for(int i=1;i<=n;i++)
    {
        result = result * X;
    }

    return result;
}

int main()
{
    double X;int n;
    //pour X^n
    cout << "donnez un nombre + la puissance pour calculer X^n" <<endl;
    cin >> X >> n;
    cout << X <<"^"<< n <<" = "<<puissance(X,n) << endl;

    //pour X^4
    cout << "donnez un nombre pour calculer X^4" <<endl;
    cin >> X;
    cout << X <<"^4 = "<<puissance(X) << endl;
    return 0;
}
