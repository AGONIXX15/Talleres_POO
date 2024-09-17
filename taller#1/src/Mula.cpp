#include "../include/Mula.h"



Mula::Mula(){}

void Mula::acoplar_ejes()
{
	std::cout << "Acoplando ejes..." << std::endl;
}

void Mula::desacoplar_ejes()
{
	std::cout << "desacoplando ejes..." << std::endl;
}

void Mula::set_ejes()
{
	int ejes;
	std::cout << "Cuantos ejes tiene su mula" << std::endl;
	std::cin >> ejes;
	std::cin.ignore();
	this->ejes = ejes;
}

void Mula::set_info()
{
	Camion::set_info();
	set_ejes();
}

std::ostream& operator<<(std::ostream& os,const Mula& obj)
{
	os << static_cast<const Camion&>(obj);
	os << "ejes: " << obj.ejes << std::endl;
	return os;
}
