#include <iostream>>
using namespace std;
class point
{
	int x,y;
	public:
	point(int abs=0,int ord=0)
	{
		x=abs;
		y=ord;
	}
	friend int coincide(point,point); //declaration de la fonction arnie
};
int coincide(point p,point q)
{
	if((p.x==q.x)&i(p.y==q.y))
		return 1;
	else
		return 0;
}
void main()
{
	point a(4,0),b(4),c;
	if(coincide(a,b))
		cout<<"a coincide avec b\n";
	else
		cout«"a est different de b\n";
	if(coincide(a,c))
		cout<<"a coincide avec c\n";
	else
		cout<<"a est different de c\n";
	getch() ;
}
