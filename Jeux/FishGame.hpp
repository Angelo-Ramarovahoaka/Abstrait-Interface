#ifndef _FishGame_HPP_
#define _FishGame_HPP_
#include<string>
#include"Jeux.hpp"

using namespace std;

class Fish:public Jeux
{
protected:
    int food;
    int foodDevin;
    int score=0;
    string player;
public:
    Fish();
    ~Fish();
    void start();
    void restart();
    void pause();
    void quit();
    void setFood();
    void displayScore();
    void choice();
};    
#endif