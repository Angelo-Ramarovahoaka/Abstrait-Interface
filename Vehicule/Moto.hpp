#ifndef _MOTO_HPP_
#define _MOTO_HPP_
#include"Vehicule.hpp"
class Moto : public Vehicule
{
    private:
        string accelerateur;
    public:
        Moto();
        ~Moto();
        string getAccelerateur();
        void setAccelerateur(string accelerateur);
        void conduire();       
};
#endif