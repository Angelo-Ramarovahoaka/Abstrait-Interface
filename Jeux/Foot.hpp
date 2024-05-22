#ifndef _FOOT_HPP_
#define _FOOT_HPP_

#include"Jeux.hpp"
class Foot: public Jeux
{
    public:
        Foot();
        ~Foot();
        void start();
        void restart();
        void pause();
        void quit();
        void marquer();
        void choice();
    protected:
        int score1;
        int score2;
        string player1;
        string player2;
};
#endif