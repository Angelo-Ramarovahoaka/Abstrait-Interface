#include<iostream>
#include"Moto.hpp"
using namespace std;

Moto::Moto()
{}
Moto::~Moto()
{}
string Moto::getAccelerateur()
{
    return this->accelerateur;
}
void Moto::setAccelerateur(string accelerateur)
{
    this->accelerateur=accelerateur;
}
void Moto::conduire()
{
    cout<< "vous avez besoin de permit A"<< endl;
}