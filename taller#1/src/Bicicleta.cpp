#include "../include/Bicicleta.h"
#include <string>


Bicicleta::Bicicleta(){}



void Bicicleta::pedalear()
{
	std::cout << "Pedaleando.." << std::endl;
}

void Bicicleta::sonar_timbre()
{
	std::cout << "Sonar timbre" << std::endl;
}

void Bicicleta::cambios()
{
	std::cout << "Cambio puesto" << std::endl;
}

void Bicicleta::set_pedales()
{
	std::string pedales;
	std::cout << "que tipo de pedales tiene?" << std::endl;
	std::getline(std::cin,pedales);
	this->pedales = pedales;
}

void Bicicleta::set_cadena()
{
	std::string cadena;
	std::cout << " Que tipo de cadena tiene?" << std::endl;
	std::getline(std::cin,cadena);
	this->cadena = cadena;
}

void Bicicleta::set_timbre()
{
	std::string timbre;
	std::cout << "Que tipo de timbre tiene tu vehiculo" << std::endl;
	std::getline(std::cin,timbre);
	this->timbre = timbre;
}

void Bicicleta::set_info()
{
	Motocicleta::set_info();
	set_pedales();
	set_timbre();
	set_cadena();
}

std::ostream& operator<<(std::ostream& os,const Bicicleta& obj)
{
	os << static_cast<const Motocicleta&>(obj);
	os << "pedales: " << obj.pedales << " " << 
		"Cadena: " << obj.cadena << " " << 
		"Timbre: " << obj.timbre << std::endl;
	return os;
}
