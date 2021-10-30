#include <iostream>

using namespace std;

class Suite {
    private :
        int Nb;
        float *S;
    public :
        Suite(){}

        Suite(float U0,int N, float q) {
            Nb = N;
            S = new float[Nb];
            S[0] = U0;

            for(int i=1;i<Nb;i++)
                S[i] = S[i-1] * q;
        }

        Suite(Suite &s) {
            Nb = s.Nb;
            S = new float[Nb];

            for(int i=0;i<Nb;i++)
                S[i] = s.S[i];
        }

        void Affiche() {
            for(int i=0;i<Nb;i++)
                cout << S[i] <<" ";

            cout<<endl;
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

int main()
{
    Suite S1(1,5,2),S2(2,5,1.5);
    Suite S3 = S1;

    cout <<"** affichage S1 **"<<endl;
    S1.Affiche();
    cout <<endl;

    cout <<"** affichage S2 **"<<endl;
    S2.Affiche();
    cout <<endl;

    cout <<"** affichage S3 **"<<endl;
    S3.Affiche();
    cout <<endl;

    S1.Meme(S3) ? cout <<"S1 egal a S3\n\n" : cout <<"S1 different de S3\n\n";
    S1.Meme(S2) ? cout <<"S1 egal a S2\n\n" : cout <<"S1 different de S2\n\n";

    Coincide(S1,S3) ? cout <<"S1 egal a S3\n\n" : cout <<"S1 different de S3\n\n";
    Coincide(S3,S2) ? cout <<"S3 egal a S2\n\n" : cout <<"S3 different de S2\n\n";

    cout <<"** affichage de l'opposee de S1 **"<<endl;
    Suite S4 = S1.Opposee();
    S4.Affiche();
    cout <<endl;

    cout <<"** affichage de l'Homo suite de S1 **"<<endl;
    Suite S5 = S1.Homo_Suite(5);
    S5.Affiche();
    cout <<endl;

    cout <<"** affichage du produit S1 * S2 **"<<endl;
    Suite S6 = S1.Produit_Suite(S2);
    S6.Affiche();
    cout <<endl;

    cout << "produit scalaire de S1 et S6" <<S1.Prod_Scal_Suite(S6) <<endl<<endl;

    cout <<"** affichage du somme S1 + S2 **"<<endl;
    Suite S7 = S1.Somme_Suite(S2);
    S7.Affiche();
    cout <<endl;

    cout <<"** affichage du produit S1 * S7 **"<<endl;
    Suite S8 = S1 * S7;
    S8.Affiche();
    cout <<endl;

    cout <<"** affichage du somme S1 + S7 **"<<endl;
    Suite S9 = S1 + S7;
    S9.Affiche();
    cout <<endl;

    cout <<"** affichage du somme S1 * 5 **"<<endl;
    Suite S10 = S1 * 5;
    S10.Affiche();
    cout <<endl;

    return 0;
}

