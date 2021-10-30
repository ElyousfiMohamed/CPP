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
        Elyousfi_rectangle () {
            x=0;
            y=0;
            z=10;
            t=5;
            counter++;
        }
        Elyousfi_rectangle(int a,int b) {
            x = a;
            y = a;
            z = b;
            t = b;
            counter++;
        }
        Elyousfi_rectangle(int a,int b,int c, int d) {
            x = a;
            y = b;
            z = c;
            t = d;
            counter++;
        }
        ~Elyousfi_rectangle(){
            cout << "dustruction du ractangle ayant les points : ("<<x<<","<<y<<")("<<z<<","<<t<<")" << endl;
        }
        void Elyousfi_definir(int a,int b,int c, int d) {
            x = a;
            y = b;
            z = c;
            t = d;
        }
        int Elyousfi_dist(int x,int y,int z, int t) { //fonction de calcul de la distance entre deux points
            return sqrt(pow(z-x,2)+pow(t-y,2));
        }
        int Elyousfi_perimetre() {
            return 2*(Elyousfi_dist(x,y,x,t)+Elyousfi_dist(x,y,z,y));
        }
        int Elyousfi_surface() {
            return (Elyousfi_dist(x,y,x,t)*Elyousfi_dist(x,y,z,y));
        }
        void Elyousfi_affiche() {
            cout << "("<<x<<","<<y<<")("<<z<<","<<t<<")" <<endl;;
        }

        void Elyousfi_affiche(char *nom) {
            cout << "nom du rectangle : " << nom <<endl;
            Elyousfi_affiche();
        }

        int Elyousfi_meme(Elyousfi_rectangle &r) {
            if(x == r.x && y == r.y && z == r.z && t == r.t)
                return 1;
            else
                return 0;
        }
};
int Elyousfi_rectangle::counter = 0;

void test() {
    Elyousfi_rectangle r1;
    Elyousfi_rectangle r2;
}

int main()
{
    Elyousfi_rectangle r1(10,5);
    Elyousfi_rectangle r2(10,5);
    if(r1.Elyousfi_meme(r2))
        cout << "coincide" <<endl;
    else
        cout << "pas coincide" <<endl;

    Elyousfi_rectangle r3(10,5);
    Elyousfi_rectangle r4(100,50);
    if(r3.Elyousfi_meme(r4))
        cout << "coincide" <<endl;
    else
        cout << "pas coincide" <<endl;

    return 0;
}
