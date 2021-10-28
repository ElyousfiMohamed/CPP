#include <iostream>
#include <conio.h>

using namespace std;

class point {
    int x,y;
public :
    point(int abs=0,int ord=2)
    {
        x = abs;
        y = ord;
    }

    int coincide(point *);
};

int point::coincide(point *adpt)
{
    if((adpt->x == this->x)&&(adpt->y == this->y))
        return 1;
    else
        return 0;
}

int main()
{
    int test1,test2;
    point a,b(1),c(0,2);
    test1 = a.coincide(&b);
    test2 = b.coincide(&a);
    cout << "a et b : " <<test1<<" ou "<<test2<<endl;
    test1 = a.coincide(&c);
    test2 = c.coincide(&a);
    cout << "a et b : " <<test1<<" ou "<<test2<<endl;
    getch();
    return 0;
}
