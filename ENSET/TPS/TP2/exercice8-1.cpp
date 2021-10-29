#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

class Complexe
{
    double x;
    double y;
 public:

     void definer(double img, double reel){
        x = img;
        y = reel;
     }

     double module(){
        return sqrt(pow(x,2)+pow(y,2));
     }

     void affiche(){
        cout <<"("<< x << " + i*"<< y <<")";
     }
};

int main()
{
    Complexe c1;
    c1.definer(1.5,1.9);
    cout << "module de ";
    c1.affiche();
    cout <<" est " << c1.module();
    getch();

    return 0;
}

