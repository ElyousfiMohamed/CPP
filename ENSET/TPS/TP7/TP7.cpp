#include <iostream>

using namespace std;

class Employe {
    private :
        int Matricule;
        int Age;
        string Nom;
        float Salaire;

    public :
        Employe () {
            cout << "**** saisie des caracteristiques de l'employe ****" << endl;
            cout << "Matricule : "; cin>>Matricule;
            cout << "Age : "; cin>>Age;
            cout << "Nom : "; cin>>Nom;
            cout << "Salaire : "; cin>>Salaire;
            cout << endl;
        }

        void ToString() {
            cout << "**** caracteristiques de lemploye ****" << endl;
            cout << "Matricule : "<<Matricule<<endl;
            cout << "Age : "<<Age<<endl;
            cout << "Nom : "<<Nom<<endl;
            cout << "Salaire : "<<Salaire<<endl;
        }

        float GetSalaire() {
            return Salaire;
        }

        void SetSalaire(float Sal) {
            Salaire = Sal;
        }

        void AfficherS() {
            cout << "\nSalaire : "<<GetSalaire()<<endl<<endl;
        }

        int GetAge() {
            return Age;
        }

        void SetAge(int ag) {
            Age = ag;
        }

        void AfficherA() {
            cout << "\nAge : "<<GetAge()<<endl<<endl;
        }

};

class Adherent:public Employe {
    private :
        string date_adh;
        float montant_part;
    public :
        Adherent ():Employe() {
            cout << "date d’adherence : "; cin>>date_adh;
            cout << "montant de participation : "; cin>>montant_part;
            cout << endl;
        }

        void ToString() {
            Employe::ToString();
            cout << "date d’adherence : "<<date_adh<<endl;
            cout << "montant de participation : "<<montant_part<<endl;
            cout << "**************************************" << endl;
        }

        float GetMontant() {
            return montant_part;
        }

        void SetMontant(float mot) {
            montant_part = mot;
        }

        float GetSalaire() {
            return Employe::GetSalaire() - montant_part;
        }

        void AfficherS() {
            cout << "\nSalaire (- le montant de participation) : "<<Employe::GetSalaire() - montant_part<<endl<<endl;
        }
};

int main()
{
    Employe E1;

    E1.ToString();
    E1.AfficherS();
    E1.AfficherA();

    Adherent A1;

    A1.ToString();
    A1.AfficherS();
    return 0;
}
