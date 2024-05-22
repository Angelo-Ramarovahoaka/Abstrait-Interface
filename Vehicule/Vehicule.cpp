#include"Vehicule.hpp"
Vehicule::Vehicule()
{
}
Vehicule::~Vehicule(){}

string Vehicule:: getMarque()
{
    return this->marque;
 }
void Vehicule::setMarque(string marque)
{
    this->marque=marque;
}