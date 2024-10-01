#include "../include/Motocicleta.h"
#include <string>
#include <utility>


Motocicleta::Motocicleta(){}

void Motocicleta::hacer_caballito()
{
	std::cout << "Haciendo el caballito" << std::endl;
}

void Motocicleta::balanceo()
{
	std::cout << "Balanceandose" << std::endl;
}

void Motocicleta::set_casco()
{
	std::string casco;
	std::cout << "su casco es? " << std::endl;
	std::getline(std::cin,casco);
	this->casco = casco;
}

void Motocicleta::set_info()
{
	Vehiculo::set_info();
	set_casco();
}

std::ostream& operator<<(std::ostream& os,const Motocicleta& obj)
{
	os << static_cast <const Vehiculo&>(obj);
	os << "Casco: " << obj.casco << std::endl;
	return os;
}
