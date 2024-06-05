#ifndef _VEHICULE_HPP_
#define _VEHICULE_HPP_

#include<string>
using namespace std;
class Vehicule
{
    private:
        string marque;
    public:
        Vehicule();
        ~Vehicule();
        string getMarque();
        void setMarque(string marque);
        virtual void conduire()=0;
};
#endif