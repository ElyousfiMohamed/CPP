#include <iostream>

using namespace std;

int main()
{
    int *ptr1, *ptr2, *ptr3;

    //allocation dynamique d'un entier
    ptr1 = new int;

    //allocation dynamique de 10 entiers
    ptr2 = new int[10];

    //allocation dynamique d'un entier avec initialisation
    ptr3 = new int(10);

    struct date  {int jour,mois,an;};
    date *ptr4,*ptr5,*ptr6,d = {25, 4, 1952};

    //allocation dynamique d'une structure
    ptr4 = new date;

    //allocation dynamique d'un tableau de structure
    ptr5 = new date[10];

    //allocation dynamique d'une structure avec initialisation
    ptr6 = new date(d);

    typedef char TAB[80]; // TAB est un synonyme de : talbeau de 80 caractéres

    TAB *ecran;

    ecran = new TAB[25]; //ecran est un tableau de 25 fois 80 caractéres

    ecran[24][79] = '$';
    //ou
    /*char (*ecran)[80] = new char[25][80];

    ecran[24][79] = '$';*/

    delete ptr1,ptr2,ptr3,ptr4,ptr5,ptr6; //desalloue la zone adressée par ptr1,ptr2,...

    char *pc = new char[100];

    delete[] pc; //desaloue la zone de 100 caractéres
    //delete [100]pc; ***instruction equivalaente***
    return 0;
}
