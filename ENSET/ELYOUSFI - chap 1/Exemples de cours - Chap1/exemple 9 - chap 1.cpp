#include <iostream>

using namespace std;
struct complexe
{
    double reel,im;
};

int main()
{
    complexe *Z;
    Z= new complexe[50];

    delete Z; //ne lib�re que le premier �l�ment
    /*delete [50]Z;*/
    //ou
    delete[] Z;
    return 0;
}
