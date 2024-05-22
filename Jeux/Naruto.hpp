#ifndef _Naruto_HPP_
#define _Naruto_HPP_

#include"Jeux.hpp"
class Naruto: public Jeux
{
    public:
        Naruto();
        ~Naruto();
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