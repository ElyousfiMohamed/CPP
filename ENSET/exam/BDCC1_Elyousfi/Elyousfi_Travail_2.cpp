#include <iostream>
#include <math.h>

using namespace std;

class Elyousfi_rectangle {
    private:
        int x,y,z,t;
    public:
        void Elyousfi_definir(int a,int b,int c, int d);
        int Elyousfi_dist(int x,int y,int z, int t);
        int Elyousfi_perimetre();
        int Elyousfi_surface();
        void Elyousfi_affiche();
};
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
        cout << "("<<x<<","<<y<<")("<<z<<","<<t<<")";
}


int main()
{
    Elyousfi_rectangle r1;
    r1.Elyousfi_definir(4,2,3,1);
    cout << "perimetre : " <<r1.Elyousfi_perimetre()<<endl;
    cout << "surface : " <<r1.Elyousfi_surface()<<endl;
    cout << "***affichage des 4 points du rectangle***"<<endl;
    r1.Elyousfi_affiche();
    return 0;
}
