
#ifndef _AUTO_HPP_
#define _AUTO_HPP_

#include"Vehicule.hpp"
class Auto:public Vehicule
{
    private:
        int vitesse;
    public:
        Auto();
        ~Auto();
        int getVitesse();
        void setVitesse(int vitesse);
        void conduire();       
};
#endif