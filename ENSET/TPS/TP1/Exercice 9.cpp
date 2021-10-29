// transmission par addresses

/*

    #include <iostream>

    using namespace std;

    struct essai
    {
        int n;
        float x;
    };

    void Remise_a_zero (struct essai *e)
    {
        e->n = 0;
        e->x = 0;
    }

    int main()
    {
        struct essai e1;
        e1.n = 5 ;
        e1.x = 6.5;

        cout << "les valeurs avant : " << e1.n << "/" << e1.x<< endl;
        Remise_a_zero(&e1);
        cout << "les valeurs apres : " << e1.n << "/" << e1.x<< endl;

        return 0;
    }

*/

// transmission par references



    #include <iostream>

    using namespace std;

    struct essai
    {
        int n;
        float x;
    };

    void Remise_a_zero (struct essai &e)
    {
        e.n = 0;
        e.x = 0;
    }

    int main()
    {
        struct essai e1;
        e1.n = 5 ;
        e1.x = 6.5;

        cout << "les valeurs avant : " << e1.n << "/" << e1.x<< endl;
        Remise_a_zero(e1);
        cout << "les valeurs apres : " << e1.n << "/" << e1.x<< endl;

        return 0;
    }

