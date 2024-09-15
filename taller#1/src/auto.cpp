
#include "../include/auto.h"



Auto::Auto(std::string brand,std::string model,
		int sits,int year, int lights ):Vehiculo(brand,model,sits,year),
	Tires(4),Mirrors(2),Doors(4),Lights(lights){}


void Auto::abrir_maletero()
{
		std::cout << "El maletero ha sido abierto" << std::endl; 
}


std::ostream& operator<<(std::ostream& os,const Auto& carro)
{
	os << static_cast<const Vehiculo&>(carro);
	os << "llantas: " << carro.Tires << " " <<
		"espejos: " << carro.Mirrors << " " << 
		"Puertas: " << carro.Doors << 
		" " << carro.Sits << std::endl;
	return os;
}
