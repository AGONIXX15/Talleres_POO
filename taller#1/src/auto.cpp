#include "../include/auto.h"



Auto::Auto(std::string marca,std::string modelo,int year, int llantas)
	:Vehiculo(marca,modelo,year),Tires(llantas),Mirrors(2),Doors(4){}


void Auto::abrir_maletero()
{
	std::cout << "El maletero ha sido abierto" << std::endl;
}

std::ostream& operator<<(std::ostream& os,const Auto& carro)
{
	os << static_cast<const Vehiculo&>(carro);
	os << "llantas: " << carro.Tires << " " <<
		"espejos: " << carro.Mirrors << " " << 
		"Puertas: " << carro.Doors << std::endl;
	return os;
}
