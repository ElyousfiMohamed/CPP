#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

class Elyousfi_personne {
    protected :
        string Nom;
        string Prenom;
        string Date;
    public :
        virtual void Elyousfi_affiche() {
            cout << "Nom : " << Nom <<",Prenom : " << Prenom <<", Date : " << Date <<endl;
        }
        void Elyousfi_saisie() {
            cout << "Nom :";cin >> Nom;
            cout << "Prenom :";cin >> Prenom;
            cout << "Date :";cin >> Date;
        }
};

class Elyousfi_etudiant:public Elyousfi_personne{
    private :
        int Niveau;
        string Specialite;
        float notes[10];

    public :
        void Elyousfi_saisie() {
            Elyousfi_personne::Elyousfi_saisie();
            cout << "Niveau :";cin >> Niveau;
            cout << "Specialite :";cin >> Specialite;
            cout << "saisie des notes" <<endl;
            for(int i=0;i<10;i++) {
                cout << "note" <<i+1<< " : ";
                cin >> notes[i];
            }
        }
        void Elyousfi_affiche() {
            Elyousfi_personne::Elyousfi_affiche();
            cout << "Niveau : " << Niveau <<",Specialite : " << Specialite <<endl;
            cout << "**notes**"<<endl;
            for(int i=0;i<10;i++) {
                cout << "note" <<i+1<< " : " << notes[i]<<endl;
            }
        }
        float Elyousfi_moyenne() {
            float sum = 0;
            for(int i=0;i<10;i++) {
                sum += notes[i];
            }
            return sum/10;
        }
};

class Elyousfi_enseignant:public Elyousfi_personne{
    private :
        string Diplome;
        string Specialite;
        float Nombre_Heures;
        int Taux;
    public :
        void Elyousfi_saisie() {
            Elyousfi_personne::Elyousfi_saisie();
            cout << "Diplome :";cin >> Diplome;
            cout << "Specialite :";cin >> Specialite;
            cout << "Nombre Heures :";cin >> Nombre_Heures;
            cout << "Taux :";cin >> Taux;
        }
        void Elyousfi_affiche() {
            Elyousfi_personne::Elyousfi_affiche();
            cout << "Diplome : " << Diplome <<",Specialite : " << Specialite << ", Nombre_Heures : " << Nombre_Heures << ",Taux : " <<Taux<<endl;
        }
        float Elyousfi_salaire() {
            float salaire = Nombre_Heures * Taux;
            return 17*salaire / 100;
        }
};

void Elyousfi_Presenter(Elyousfi_personne &p) {
    p.Elyousfi_affiche();
}

int main()
{
    Elyousfi_personne p;
    p.Elyousfi_saisie();
    cout <<endl<<endl;

    Elyousfi_etudiant et;
    et.Elyousfi_saisie();
    cout <<endl<<endl;

    Elyousfi_enseignant es;
    es.Elyousfi_saisie();
    cout <<endl<<endl;

    Elyousfi_Presenter(p);
    cout <<endl<<endl;

    Elyousfi_Presenter(et);
    cout << "moyenne : " <<et.Elyousfi_moyenne()<<endl;
    cout <<endl<<endl;


    Elyousfi_Presenter(es);
    cout << "salaire : " <<es.Elyousfi_salaire()<<endl;
    cout <<endl<<endl;
}
