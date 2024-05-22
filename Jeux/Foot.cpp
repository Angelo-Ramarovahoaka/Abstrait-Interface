
#include"Foot.hpp"
#include<iostream>

using namespace std;

Foot::Foot()
{}
Foot::~Foot()
{}
void Foot::start()
{
    cout << "___________________" << endl;
    cout << "PES 2024" << endl;
    cout << "___________________" << endl;

    cout << "___________________" << endl;
    cout << "START" << endl;
    cout << "___________________" << endl;

    cout << "Enter players" << endl;
    cin >> player1 ;
    cin >> player2 ;
}
void Foot::restart()
{
    cout << "___________________" << endl;
    cout << "RESTART" << endl;
    cout << "___________________" << endl;
    Foot::start();
}
void Foot::pause()
{
    cout << "___________________" << endl;
    cout << "PAUSE" << endl;
    cout << "___________________" << endl;
}
void Foot::quit()
{
    cout << "___________________" << endl;
    cout << "QUIT" << endl;
    cout << "___________________" << endl;
}
void Foot::marquer()
{
    cout << "SCORE \n";
    srand(time(NULL));
    score1=rand()%5;
    score2=rand()%5;

    cout << player1 << " : " << player2 << endl;
    cout << score1 << " : " << score2 << endl;
    go=false;
}
void Foot::choice()
{
    Foot::start();
    go=true;
    while(go!=false)
    {
        int choix;
        cout << "1 : restart " << endl;
        cout << "2 : pause " << endl;
        cout << "3 : quit and display score " << endl;
        cin >> choix; 
        switch(choix)
        {
            case 1:
                Foot::restart();
            break;
            case 2:
                Foot::pause();
            break;
            case 3:
                Foot::marquer();
            break;
            default:
            cout << "erreur" << endl;
            break;
        }
    }
    Foot::quit();
}
