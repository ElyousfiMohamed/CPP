#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

class Complexe
{
    double x;
    double y;
 public:
     Complexe()
     {
          x = 0;
          y = 0;
     }

     Complexe(double reel, double img)
     {
          x = reel;
          y = img;
     }

     Complexe(double reel)
     {
          x = reel;
          y = 0;
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
    cout << "module de ";
    c1.affiche();
    cout <<" est " << c1.module() <<endl;
    getch();

    Complexe c2(5.1);
    cout << "module de ";
    c2.affiche();
    cout <<" est " << c2.module() <<endl;
    getch();

    Complexe c3(55.1,5.5);
    cout << "module de ";
    c3.affiche();
    cout <<" est " << c3.module() <<endl;
    getch();

    return 0;
}

