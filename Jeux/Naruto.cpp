
#include"Naruto.hpp"
#include<iostream>

using namespace std;

Naruto::Naruto()
{}
Naruto::~Naruto()
{}
void Naruto::start()
{
    cout << "___________________" << endl;
    cout << "Naruto SHIBODEN" << endl;
    cout << "___________Foot________" << endl;

    cout << "___________________" << endl;
    cout << "START" << endl;
    cout << "___________________" << endl;

    cout << "Enter players" << endl;
    cin >> player1 ;
    cin >> player2 ;
}
void Naruto::restart()
{
    cout << "___________________" << endl;
    cout << "RESTART" << endl;
    cout << "___________________" << endl;
    Naruto::start();
}
void Naruto::pause()
{
    cout << "___________________" << endl;
    cout << "PAUSE" << endl;
    cout << "___________________" << endl;
}
void Naruto::quit()
{
    cout << "___________________" << endl;
    cout << "QUIT" << endl;
    cout << "___________________" << endl;
}
void Naruto::marquer()
{
    cout << "SCORE \n";
    srand(time(NULL));
    score1=rand()%5;
    score2=rand()%5;

    cout << player1 << " : " << player2 << endl;
    cout << score1 << " : " << score2 << endl;
    go=false;
}
void Naruto::choice()
{
    Naruto::start();
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
                Naruto::restart();
            break;
            case 2:
                Naruto::pause();
            break;
            case 3:
                Naruto::marquer();
            break;
            default:
            cout << "erreur" << endl;
            break;
        }
    }
    Naruto::quit();
}
