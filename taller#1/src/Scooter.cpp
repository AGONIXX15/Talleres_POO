#include "../include/Scooter.h"
#include <ostream>


Scooter::Scooter(){}

void Scooter::recargar()
{
	std::cout << "Recargando bateria..." << std::endl;
}

void Scooter::set_bateria()
{
	std::string bateria;
	std::cout << "Capacidad de la bateria" << std::endl;
	std::getline(std::cin,bateria);
	this->bateria = bateria;
}

void Scooter::set_pata_cabra()
{
	std::string pata;
	std::cout << "Pata de cabra?" << std::endl;
	std::getline(std::cin,pata);
	this->pata_cabra = pata;

}

void Scooter::set_info()
{
	Motocicleta::set_info();
	set_bateria();
	set_pata_cabra();
}

std::ostream& operator<<(std::ostream& os,const Scooter& obj)
{
	os << static_cast <const Motocicleta&>(obj);
	os << "bateria: " << obj.bateria << " " << "Pata cabra: " << obj.pata_cabra << std::endl;
	return os;
}
