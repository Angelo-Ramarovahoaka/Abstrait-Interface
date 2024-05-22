#include<iostream>
#include"Vehicule.hpp"
#include"Auto.hpp"
#include"Moto.hpp"

using namespace std;

int main()
{
    Moto scooteur;
    Auto camion;

    cout<<"conduire scooteur"<<endl;
    scooteur.conduire();
    scooteur.setAccelerateur("maximum");
    cout<< "acceleration"<<scooteur.getAccelerateur()<<endl;



    cout<<"\nconduire Camion"<<endl;
    camion.conduire();
    camion.setVitesse(5);
    cout<<"Vitesse:" << camion.getVitesse()<< endl;

    return 0;
}