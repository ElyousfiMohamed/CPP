#include <iostream>
#include <math.h>

using namespace std;

class Elyousfi_rectangle {
    private:
        int x;
        int y;
        int z;
        int t;
    public:
        Elyousfi_rectangle ();
        Elyousfi_rectangle(int a,int b);
        Elyousfi_rectangle(int a,int b,int c, int d);
        ~Elyousfi_rectangle();
        void Elyousfi_definir(int a,int b,int c, int d);
        int Elyousfi_dist(int x,int y,int z, int t);
        int Elyousfi_perimetre();
        int Elyousfi_surface();
        void Elyousfi_affiche();
};
        Elyousfi_rectangle::Elyousfi_rectangle () {
            x=0;
            y=0;
            z=10;
            t=5;
        }
        Elyousfi_rectangle::Elyousfi_rectangle(int a,int b) {
            x = a;
            y = a;
            z = b;
            t = b;
        }
        Elyousfi_rectangle::Elyousfi_rectangle(int a,int b,int c, int d) {
            x = a;
            y = b;
            z = c;
            t = d;
        }
        Elyousfi_rectangle::~Elyousfi_rectangle(){
            cout << "dustruction du ractangle ayant les points : ("<<x<<","<<y<<")("<<z<<","<<t<<")" << endl;
        }
        void Elyousfi_rectangle::Elyousfi_definir(int a,int b,int c, int d) {
            x = a;
            y = b;
            z = c;
            t = d;
        }
        int Elyousfi_rectangle::Elyousfi_dist(int x,int y,int z, int t) { //fonction de calcul de la distance entre deux points
            return sqrt(pow(z-x,2)+pow(t-y,2));
        }
        int Elyousfi_rectangle::Elyousfi_perimetre() {
            return 2*(Elyousfi_dist(x,y,x,t)+Elyousfi_dist(x,y,z,y));
        }
        int Elyousfi_rectangle::Elyousfi_surface() {
            return (Elyousfi_dist(x,y,x,t)* Elyousfi_dist(x,y,z,y));
        }
        void Elyousfi_rectangle::Elyousfi_affiche() {
            cout << "("<<x<<","<<y<<")("<<z<<","<<t<<")" <<endl;;
        }


int main()
{
    Elyousfi_rectangle r1;
    cout << "perimetre : " <<r1.Elyousfi_perimetre()<<endl;
    cout << "surface : " <<r1.Elyousfi_surface()<<endl;
    cout << "***affichage des 4 points du rectangle***"<<endl;
    r1.Elyousfi_affiche();

    cout <<endl<<endl;

    Elyousfi_rectangle r2(10,5);
    cout << "perimetre : " <<r2.Elyousfi_perimetre()<<endl;
    cout << "surface : " <<r2.Elyousfi_surface()<<endl;
    cout << "***affichage des 4 points du rectangle***"<<endl;
    r2.Elyousfi_affiche();

    cout <<endl<<endl;

    Elyousfi_rectangle r3(4,2,3,1);
    cout << "perimetre : " <<r3.Elyousfi_perimetre()<<endl;
    cout << "surface : " <<r3.Elyousfi_surface()<<endl;
    cout << "***affichage des 4 points du rectangle***"<<endl;
    r3.Elyousfi_affiche();



    return 0;
}
