
#include "../include/Auto.h"
#include <string>



Auto::Auto(){};
//Constructor
Auto::Auto(std::string brand,std::string model,
		int sits,int year, int lights ):Vehiculo(brand,model,sits,year),
	tires(4),mirrors(2),doors(4),lights(lights){}


void Auto::manejar()
{
	std::cout << "Manejando el Auto" << std::endl;
}

void Auto::abrir_maletero()
{
		std::cout << "El maletero ha sido abierto" << std::endl; 
}

void Auto::cerrar_maletero()
{
	std::cout << "El maletero ha sido cerrado" << std::endl;
}

void Auto::abrir_puerta()
{
	std::cout << "La puerta se ha abierto" << std::endl; 
}

void Auto::cerrar_puerta()
{
	std::cout << "La puerta se ha cerrado" << std::endl;
}

void Auto::prender_luces()
{
	std::cout << "Se han prendido las luces" << std::endl;
}

void Auto::apagar_luces()
{
	std::cout << "Se han apagado las luces" << std::endl;
}

void Auto::ajustar_asiento()
{
	std::cout << "El asiento ha sido ajustado" << std::endl;
}

void Auto::kilometraje()
{
	std::cout << "el kilometraje de tu Auto es: " << this->km << std::endl;
}

void Auto::llenar_combustible()
{
	std::cout << "llenando combustible" << std::endl;
}
void Auto::set_tires()
{
	int tires;
	std::cout << "Ingrese las ruedas que tiene su carro: " << std::endl;
	std::cin >> tires;
	std::cin.ignore();
	this->tires = tires;
}

void Auto::set_doors()
{
	int doors;
	std::cout << "Ingrese las puertas de su auto: " << std::endl;
	std::cin >> doors;
	std::cin.ignore();
	this->doors = doors;
}

void Auto::set_mirrors()
{
	int mirrors;
	std::cout << "Ingrese los espejos de su auto: " << std::endl;
	std::cin >> mirrors;
	std::cin.ignore();
	this->mirrors = mirrors;
}

void Auto::set_lights()
{
	int lights;
	std::cout << "Ingrese las luces que tiene su auto: " << std::endl;
	std::cin >> lights;
	std::cin.ignore();
	this->lights = lights;
}

void Auto::set_km()
{
	std::string km;
	std::cout << "Cuanto es el kilometraje de tu auto: " << std::endl;
	std::getline(std::cin,km);
	this->km = km;
}


// Polimorfismo extendiendo el set de vehiculo
void Auto::set_info()
{
	Vehiculo::set_info();
	set_tires();
	set_doors();
	set_mirrors();
	set_lights();
	set_km();
}
// imprimir informacion 
std::ostream& operator<<(std::ostream& os,const Auto& carro)
{
	os << static_cast<const Vehiculo&>(carro);
	os << "llantas: " << carro.tires << " " <<
		"espejos: " << carro.mirrors << " " << 
		"Puertas: " << carro.doors << 
		" " <<"asientos: " <<carro.sits <<
		" " << "luces: "<< carro.lights<<
		" "<< "km: " << carro.km << std::endl;
	return os;
}
