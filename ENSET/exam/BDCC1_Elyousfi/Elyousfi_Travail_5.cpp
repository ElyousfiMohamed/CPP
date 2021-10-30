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
        static int counter;
        Elyousfi_rectangle ();
        Elyousfi_rectangle(int a,int b);
        Elyousfi_rectangle(int a,int b,int c, int d);
        ~Elyousfi_rectangle();
        void Elyousfi_definir(int a,int b,int c, int d);
        int Elyousfi_dist(int x,int y,int z, int t);
        int Elyousfi_perimetre();
        int Elyousfi_surface();
        void Elyousfi_affiche();
        void Elyousfi_affiche(char *nom);
};
int Elyousfi_rectangle::counter = 0;

 Elyousfi_rectangle::Elyousfi_rectangle () {
            x=0;
            y=0;
            z=10;
            t=5;
            counter++;
        }
         Elyousfi_rectangle::Elyousfi_rectangle(int a,int b) {
            x = a;
            y = a;
            z = b;
            t = b;
            counter++;
        }
         Elyousfi_rectangle::Elyousfi_rectangle(int a,int b,int c, int d) {
            x = a;
            y = b;
            z = c;
            t = d;
            counter++;
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
            return (Elyousfi_dist(x,y,x,t)*Elyousfi_dist(x,y,z,y));
        }
         void Elyousfi_rectangle::Elyousfi_affiche() {
            cout << "("<<x<<","<<y<<")("<<z<<","<<t<<")" <<endl;;
        }

        void Elyousfi_rectangle::Elyousfi_affiche(char *nom) {
            cout << "nom du rectangle : " << nom <<endl;
            Elyousfi_affiche();
        }
void test() {
    Elyousfi_rectangle r1;
    Elyousfi_rectangle r2;
}

int main()
{
    Elyousfi_rectangle r(10,5);

    r.Elyousfi_affiche();
    r.Elyousfi_affiche("Elyousfi_rectangle");

    return 0;
}
