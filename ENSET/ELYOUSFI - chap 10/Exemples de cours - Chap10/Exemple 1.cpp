#include <iostream>

using namespace std;

class vehicule
{
	public :
	void afficher () const;

	protected :
	int m_prix;

};

class voiture : public vehicule
{
	public :
	void afficher () const;

	private :
	int m_portes;
};

class moto : public vehicule
{
	public :
	void afficher () const;

	private :
	double m_vitesse;

};

void vehicule::afficher() const {
	cout<<"ceci est un vehicule "<<endl;
}

void voiture::afficher() const {
	cout<<"ceci est une voiture "<<endl;
}

void moto::afficher() const {
	cout<<"ceci est une moto "<<endl;
}

int main(){

    vehicule v;
    v.afficher();

    moto m;
    m.afficher();

    return 0;
}
