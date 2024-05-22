#include<iostream>
#include"Jeux.hpp"
#include"Foot.hpp"
#include"FishGame.hpp"
#include"Naruto.hpp"

using namespace std;

int main()
{
    Foot pes = Foot();
    Fish Tilapia = Fish();
    Naruto shiboden = Naruto();
     int choix;
        cout << "1 : Foot Game" << endl;
        cout << "2 : Fish Game  " << endl;
        cout << "3 : Naruto Game  " << endl;
        cin >> choix;
        switch(choix)
        {
            case 1:
                pes.choice();
            break;
            case 2:
                Tilapia.choice();
            break;
            case 3:
                shiboden.choice();
            break;
            default:
            cout << "erreur" << endl;
            break;
        }
    return 0;
}