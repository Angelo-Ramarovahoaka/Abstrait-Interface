#include<iostream>
#include"FishGame.hpp"

using namespace std;

Fish::Fish()
{
}
Fish::~Fish()
{
}
void Fish::start()
{
    cout << "___________________" << endl;
    cout << "WELCOME TO RAMARO FISH GAME" << endl;
    cout << "FISH GAME" << endl;
    cout << "___________________" << endl;
    cout << "___________________" << endl;
    cout << "START" << endl;
    cout << "___________________" << endl;

    cout << "Enter player" << endl;
    cin >> player;
}
void Fish::quit()
{
    cout << "___________________" << endl;
    cout << "QUIT" << endl;
    cout << "___________________" << endl;
}
void Fish::restart()
{
    cout << "___________________" << endl;
    cout << "RESTART" << endl;
    cout << "___________________" << endl;
    Fish::start();
}
void Fish::pause()
{
    cout << "___________________" << endl;
    cout << "PAUSE" << endl;
    cout << "___________________" << endl;
}
void Fish::displayScore()
{
    cout << player << " votre score est : " << score << endl;
}
void Fish::setFood()
{

    while(true)
    {
        srand(time(0));
        food=rand()%2;
        cout << "choice 0 or 1 to get food \n";
        cin >> foodDevin;
        if(food==foodDevin)
        {
        cout <<"thinks, fish get food \n";
            score++;
            if(score==4){
            cout << "YOU WIN" << endl;
                break;
            }
        }
        else
        {
            cout <<"sorry, fish get bombe \n";
            cout << "GAME OVER" << endl;
            break;
        }
    }
    Fish::displayScore();
    go=false;
}
void Fish::choice()
{
    Fish::start();
    go=true;
    while(go!=false)
    {
        int choix;
        cout << "1 : restart " << endl;
        cout << "2 : pause " << endl;
        cout << "3 : play " << endl;
        cin >> choix; 
        switch(choix)
        {
            case 1:
                Fish::restart();
            break;
            case 2:
                Fish::pause();
            break;
            case 3:
                Fish::setFood();
            break;
            default:;
            cout << "erreur" << endl;
            break;
        }
    }
    Fish::quit();
}

