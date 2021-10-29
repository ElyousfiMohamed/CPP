// cas 1

/*
    #include <iostream>
    #include <conio.h>

    using namespace std;

    void echange(int a,int b)
    {
        int tampon;
        tampon = b;
        b = a;
        a = tampon;
        cout<<"Pendant l'�change: a = "<<a<<" b = "<<b<<"\n";
    }
    int  main()
    {
    int u=5,v=3;
    cout<<"Avant �change: u = "<<u<<" v = "<<v<<"\n";
    echange(u,v);
    cout<<"Apr�s �change: u = "<<u<<" v = "<<v<<"\n";
    getch() ;
} */




//cas 1 : aucune echange n'est effectu�




/*-----------------------------------------------------*/
//cas 2


/*
    #include <iostream>
    #include <conio.h>

    using namespace std;

    void echange(int *a,int *b)
    {
    int tampon;
    tampon = *b; *b = *a; *a = tampon;
    cout<<"Pendant l'�change: a = "<<*a<<" b = "<<*b<<"\n";
    }
    int main()
    {
    int u=5,v=3;
    cout<<"Avant echange: u = "<<u<<" v = "<<v<<"\n";
    echange(&u,&v);
    cout<<"Apres echange: u = "<<u<<" v = "<<v<<"\n";
    getch() ;
} */




//cas 2: l'echange est bien effectu�




/*-----------------------------------------------------*/
//cas 3

    #include <iostream>
    #include <conio.h>

    using namespace std;

    void echange(int &a,int &b)
    {
    int tampon;
    tampon = b; b = a; a = tampon;
    cout<<"Pendant l'�change: a = "<<a<<" b = "<<b<<"\n";
    }
    int main()
    {
    int u=5,v=3;
    cout<<"Avant echange: u = "<<u<<" v = "<<v<<"\n";
    echange(u,v);
    cout<<"Apres echange: u = "<<u<<" v = "<<v<<"\n";
    getch() ;
    }




//cas 3: l'echange est bien effectu�





/* -*-*- conclusion : le premier cas l'echange est echou�e car le passage fait par valeur,
donc les variables locales de la fontions detruits lors on quitte la fonction, contrarement au cas 2
( passage par addresse ) et le cas 3 (passage par r�f�rence) -*-*- */
