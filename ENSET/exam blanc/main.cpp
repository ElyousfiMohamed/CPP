#include <iostream>

using namespace std;

class Suite {
    protected :
        int Nb;
        float *S;
    public :
        Suite(){}
        Suite(int N, int a, int b) {
            Nb = N;
            S = new float[Nb];
            S[0] = a;
            S[1] = b;

            for(int i=2;i<Nb;i++) {
                S[i] = 4 * S[i-2] + 2 * S[i-1] + 6;
            }
        }
        Suite(Suite &v) {
            Nb = v.Nb;
            S = new float[Nb];
            for(int i=0;i<Nb;i++) {
                S[i] = v.S[i];
            }
        }
        ~Suite(){}
        void affiche() {
            for(int i=0;i<Nb;i++) {
                cout <<"[ "<< S[i] <<" ";
            }
            cout << "]";
        }
        int Meme(Suite &s) {
             for(int i=0;i<Nb;i++) {
                if(S[i] != s.S[i])
                    return 0;
             }
             return 1;
        }
        Suite& Opposee() {
            Suite *s = new Suite();
            s->Nb = Nb;
            s->S = new float[s->Nb];

            for(int i=0;i<Nb;i++) {
                s->S[i] = -1 * S[i];
            }
            return *s;
        }
        Suite& Homo_Suite(float a) {
            Suite *s = new Suite();
            s->Nb = Nb;
            s->S = new float[s->Nb];

            for(int i=0;i<s->Nb;i++)
                s->S[i] = a * S[i];


            return *s;
        }
        Suite& Produit_Suite(Suite &s) {
            if(s.Nb != Nb)
                cout <<"nombre de termes differents"<<endl;
            else {
                Suite *sR = new Suite();
                sR->Nb = Nb;
                sR->S = new float[sR->Nb];
                for(int i=0;i<Nb;i++)
                    sR->S[i] = s.S[i] * S[i];

                return *sR;
            }
        }
        float Prod_Scal_Suite(Suite &s) {
            if(s.Nb != Nb)
                cout <<"nombre de termes differents"<<endl;
            else {
                Suite sR = Produit_Suite(s);
                double res = 0;

                for(int i=0;i<Nb;i++)
                        res += sR.S[i];

                return res;
            }
        }
        Suite& Somme_Suite(Suite &s) {
            if(s.Nb != Nb)
                cout <<"nombre de termes differents"<<endl;
            else {
                Suite *sR = new Suite();
                sR->Nb = Nb;
                sR->S = new float[sR->Nb];
                for(int i=0;i<Nb;i++)
                    sR->S[i] = s.S[i] + S[i];

                return *sR;
            }
        }
        Suite& operator+(Suite &s) {
            return Somme_Suite(s);
        }

        Suite& operator*(Suite &s) {
            return Produit_Suite(s);
        }
        Suite& operator*(float h) {
            return Homo_Suite(h);
        }
        friend int Coincide(Suite &S1, Suite &S2) {
                 return S1.Meme(S2);
        }
};

class SuiteBornee:public Suite {
    private:
        float borneMax;
        float bornMin;
    public :
        SuiteBornee (int N,float a, float b):Suite(N,a,b){
            borneMax = bornMin = S[0];
            for(int i=0;i<Nb;i++) {
                if(S[i] > borneMax)
                    borneMax = S[i];

                if(S[i] < bornMin)
                    bornMin = S[i];
            }
        }
        float GetMax() {
            return borneMax;
        }
        float GetMin() {
            return bornMin;
        }
        void Setlimites(float bMin,float bMax) {
            borneMax = bMax;
            bornMin = bMin;
        }
        void affiche() {
            cout <<"[ ";
            for(int i=0;i<Nb;i++) {
                if(S[i] <= borneMax && S[i] >= bornMin)
                 cout << S[i] <<" ";
            }
            cout << "]"<<endl;
        }
};

int main()
{
    /* implémentation de la classe Suite */
    Suite S1(10,5,2),S2(10,5,1.5);
    Suite S3 = S1;

    cout <<"** affichage S1 **"<<endl;
    S1.affiche();
    cout <<endl;

    cout <<"** affichage S2 **"<<endl;
    S2.affiche();
    cout <<endl;

    cout <<"** affichage S3 **"<<endl;
    S3.affiche();
    cout <<endl;

    S1.Meme(S3) ? cout <<"S1 egal a S3\n\n" : cout <<"S1 different de S3\n\n";
    S1.Meme(S2) ? cout <<"S1 egal a S2\n\n" : cout <<"S1 different de S2\n\n";

    Coincide(S1,S3) ? cout <<"S1 egal a S3\n\n" : cout <<"S1 different de S3\n\n";
    Coincide(S3,S2) ? cout <<"S3 egal a S2\n\n" : cout <<"S3 different de S2\n\n";

    cout <<"** affichage de l'opposee de S1 **"<<endl;
    Suite S4 = S1.Opposee();
    S4.affiche();
    cout <<endl;

    cout <<"** affichage de l'Homo suite de S1 **"<<endl;
    Suite S5 = S1.Homo_Suite(5);
    S5.affiche();
    cout <<endl;

    cout <<"** affichage du produit S1 * S2 **"<<endl;
    Suite S6 = S1.Produit_Suite(S2);
    S6.affiche();
    cout <<endl;

    cout << "produit scalaire de S1 et S6" <<S1.Prod_Scal_Suite(S6) <<endl<<endl;

    cout <<"** affichage du somme S1 + S2 **"<<endl;
    Suite S7 = S1.Somme_Suite(S2);
    S7.affiche();
    cout <<endl;

    cout <<"** affichage du produit S1 * S7 **"<<endl;
    Suite S8 = S1 * S7;
    S8.affiche();
    cout <<endl;

    cout <<"** affichage du somme S1 + S7 **"<<endl;
    Suite S9 = S1 + S7;
    S9.affiche();
    cout <<endl;

    cout <<"** affichage du somme S1 * 5 **"<<endl;
    Suite S10 = S1 * 5;
    S10.affiche();
    cout <<endl;


    /* implémentation de la classe SuiteBornee */
    SuiteBornee Sb1(5,5.2,6);

    cout << "borne Max : " << Sb1.GetMax() <<endl;
    cout << "borne Min : " << Sb1.GetMin() <<endl;

    Sb1.affiche();

    Sb1.Setlimites(1,8);

    Sb1.affiche();
    return 0;
}
