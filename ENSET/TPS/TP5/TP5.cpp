#include <iostream>
#include <conio.h>
#define PI 3.14
using namespace std;

// debut 1ère partie :
class coordonne{
    private :
        int x,y;
	public :
	coordonne(int a=0,int b=0){
		x=a;
		y=b;
	}

	void deplace(int a,int b) {
        x += a;
        y += b;
	}

	void affiche(){
		cout<<"(X = "<<x<<", Y = "<<y<< ")"<<endl;
	}
};

class forme{
    protected :
        short couleur;              /* 0 : Noir / 1 : Bleu / 2 : Vert / 4 : Rouge / 5 : Violet / 7 : Gris / 14 : Jaune / 15 : Blanc */
	public :
	    forme(short = 1) ;
        forme(forme &);
        void affiche();
        forme operator = (forme &) ;
};

forme::forme(short clr) {
    couleur = clr;
}

forme::forme(forme &frm) {   // constructeur de recopie
    couleur = frm.couleur;
}

void forme::affiche(){
    cout<<"(Couleur : "<<couleur<<")"<<endl;
}

forme forme::operator=(forme &frm) {
    couleur = frm.couleur;
}
// fin 1ère partie.

// debut 2éme partie :
class cercle:public forme {
    protected :
        coordonne centre;
        short rayon;
	public :
	    cercle(int, int, short, short) ;
        cercle(cercle &) ;
        cercle operator = (cercle &) ;
        void affiche() ;
        void deplace(int, int) ;
        int surface();
        int perimetre();
};

cercle::cercle(int a, int b, short ryn, short clr):forme(clr) {
    centre = coordonne(a,b);
    rayon = ryn;
}

cercle::cercle(cercle &c) {
    forme(c.couleur);
    centre = c.centre;
    rayon = c.rayon;
}

cercle cercle::operator=(cercle &c) {
    couleur = c.couleur;
    centre = c.centre;
    rayon = c.rayon;
}

void cercle::affiche() {
    cout << "** informations du cercle **" <<endl;
    forme::affiche();
    centre.affiche();
    cout << "(rayon : " <<rayon<<")"<<endl;
    cout << "(surface : " <<surface()<<")"<<endl;
    cout << "(perimetre : " <<perimetre()<<")"<<endl;
    cout <<endl;
}

void cercle::deplace(int a, int b) {
    centre.deplace(a,b);
}

int cercle::surface(){
    return PI*rayon*rayon;
}

int cercle::perimetre(){
    return 2*PI*rayon;
}
// fin 2éme partie.

//debut 3éme partie :
class triangle:public forme {
    protected :
        coordonne a, b, c;
	public :
	    triangle(int ,int ,int ,int ,int ,int ,short) ;
        triangle(triangle &) ;
        triangle operator = (triangle &) ;
        void affiche() ;
        void deplace(int, int) ;
};

triangle::triangle(int d,int e,int f,int g,int h,int i,short clr):forme(clr) {
    a = coordonne(d,e);
    b = coordonne(f,g);
    c = coordonne(h,i);
}

triangle::triangle(triangle &t) {
    a = t.a;
    b = t.b;
    c = t.c;
    forme(t.couleur);
}

triangle triangle::operator=(triangle &t) {
    couleur = t.couleur;
    a = t.a;
    b = t.b;
    c = t.c;
}

void triangle::deplace(int x, int y) {
    a.deplace(x,y);
    b.deplace(x,y);
    c.deplace(x,y);
}


void triangle::affiche() {
    cout << "** informations du triangle **" <<endl;
    forme::affiche();
    a.affiche();
    b.affiche();
    c.affiche();
    cout <<endl;
}
// fin 3éme partie.*/

//debut 4éme partie :
class rectangle:public forme {
    protected :
        coordonne a, b;
	public :
	    rectangle(int ,int ,int ,int, short) ;
        rectangle(rectangle &) ;
        rectangle operator = (rectangle &) ;
        void affiche() ;
        void deplace(int, int);
};

rectangle::rectangle(int d,int e,int f,int g,short clr):forme(clr) {
    a = coordonne(d,e);
    b = coordonne(f,g);
}

rectangle::rectangle(rectangle &r) {
    a = r.a;
    b = r.b;
    forme(r.couleur);
}

rectangle rectangle::operator=(rectangle &r) {
    couleur = r.couleur;
    a = r.a;
    b = r.b;
}

void rectangle::deplace(int x, int y) {
    a.deplace(x,y);
    b.deplace(x,y);
}

void rectangle::affiche() {
    cout << "** informations du rectangle **" <<endl;
    forme::affiche();
    a.affiche();
    b.affiche();
    cout <<endl;
}
// fin 4éme partie.*/


//debut 5éme partie :
class carre:public forme {
    protected :
        coordonne a;
        short cote;
	public :
	    carre(int ,int ,short , short) ;
        carre(carre &) ;
        carre operator = (carre &) ;
        void affiche() ;
        void deplace(int, int);
        int surface();
        int perimetre();
};

carre::carre(int d,int e,short cot,short clr):forme(clr) {
    a = coordonne(d,e);
    cote = cot;
}

carre::carre(carre &r) {
    a = r.a;
    cote = r.cote;
    forme(r.couleur);
}

carre carre::operator=(carre &r) {
    couleur = r.couleur;
    a = r.a;
    cote = r.cote;
}

void carre::deplace(int x, int y) {
    a.deplace(x,y);
}

int carre::surface(){
    return cote*cote;
}

int carre::perimetre(){
    return 4*cote;
}

void carre::affiche() {
    cout << "** informations du carre **" <<endl;
    forme::affiche();
    a.affiche();
    cout << "(cote : " <<cote<<")"<<endl;
    cout << "(surface : " <<surface()<<")"<<endl;
    cout << "(perimetre : " <<perimetre()<<")"<<endl;
    cout <<endl;
}
// fin 4éme partie.*/
int main()
{
    //création d'un cercle de coordonnées 10, 2 de rayon 5 et de couleur 12
    cercle cl (10,20,5, 12);
    cl.deplace(5,4);
    cl.affiche();

    triangle T(10,20,30,40,50,50,11) ;
    T.affiche();
    T.deplace(5,4);
    T.affiche();

    rectangle R(10,20,30,40,50) ;
    R.affiche() ;
    R.deplace(5,4) ;
    R.affiche();

    carre c(10,20,5,10) ;
    c.affiche() ;
    c.deplace(5,4) ;
    c.affiche() ;
    return 0;
}
