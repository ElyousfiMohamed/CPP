#include <iostream>

using namespace std;

class Suite {
    private :
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

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
