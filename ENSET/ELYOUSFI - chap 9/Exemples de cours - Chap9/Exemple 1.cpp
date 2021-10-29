#include <iostream>

using namespace std;

class point{
	int x,y;
	public :
	point(int a,int b){
		cout<<"++point.const"<<endl;
		x=a; y=b;
	}
	~point(){
		cout<<"--point.dest"<<endl;
	}
	void afficher(){
		cout<<"point :: "<<x<<", "<<y<<endl;
	}
};

class coul{
	short color;
	public :
	coul(int a){
		cout<<"++coul.const"<<endl;
		color=a;
	}

	~coul(){
		cout<<"--coul.dest"<<endl;
	}
	void afficher(){
		cout<<"color : "<<color<<endl;
	}
};

class pointcoul : public point, public coul{

	public:
	pointcoul(int a, int b , int c):point(a,b), coul(c){
		cout<<"++pointcoul.const"<<endl;
	}
	~pointcoul(){
		cout<<"--pointcoul.dest"<<endl;
	}
	void afficher(){
		point::afficher();
		coul::afficher();
	}
};


int main(){
	pointcoul p(3,9,2);
	cout<<"------------------------------------------"<<endl;
	p.afficher();
	cout<<"------------------------------------------"<<endl;
	p.point::afficher();
	cout<<"------------------------------------------"<<endl;
	p.coul::afficher();
	cout<<"------------------------------------------"<<endl;

    return 0;
}
