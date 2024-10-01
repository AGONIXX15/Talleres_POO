#include "../include/Camion.h"
#include <cwchar>
#include <string>



Camion::Camion(){}

void Camion::cargar_cargamento()
{
	std::cout << "Cargando cargamento" << std::endl;
}

void Camion::descargar_cargamento()
{
	std::cout << "Descargando cargamento" << std::endl;
}


void Camion::llenar_combustible()
{
	std::cout << "Combustible ha sido llenado" << std::endl;
}

void Camion::set_actual_gas()
{
	std::cout << " cuanta gasolina tiene su camion ahora mismo?" << std::endl;
	std::string gas;
	std::getline(std::cin,gas);
	this->gasolina_actual = gas;
}

void Camion::set_max_gas()
{
	std::cout << "Cuanta es la gasolina maxima de su vehiculo?" << std::endl;
	std::string gas;
	std::getline(std::cin,gas);
	this->gasolina_maxima = gas;

}

void Camion::set_capacity_actual()
{
	std::string capacity;
	std::cout << "cual es la capacidad actual de su camion?" << std::endl;
	std::getline(std::cin,capacity);
	this->capacidad_actual = capacity;
}

void Camion::set_max_capacity()
{
	std::cout << "La maxima capacidad de peso de su Camion?" << std::endl;
	std::string capacity;
	std::getline(std::cin,capacity);
	this-> capacidad_maxima = capacity;
}

void Camion::set_tires()
{
	int tires;
	std::cout << "Ingrese las ruedas que tiene su Camion: " << std::endl;
	std::cin >> tires;
	std::cin.ignore();
	this->tires = tires;
}

void Camion::set_doors()
{
	int doors;
	std::cout << "Ingrese las puertas de su Camion: " << std::endl;
	std::cin >> doors;
	std::cin.ignore();
	this->doors = doors;
}

void Camion::set_mirrors()
{
	int mirrors;
	std::cout << "Ingrese los espejos de su Camion: " << std::endl;
	std::cin >> mirrors;
	std::cin.ignore();
	this->mirrors = mirrors;
}

void Camion::set_lights()
{
	int lights;
	std::cout << "Ingrese las luces que tiene su Camion: " << std::endl;
	std::cin >> lights;
	std::cin.ignore();
	this->lights = lights;
}

void Camion::set_km()
{
	float km;
	std::cout << "Cuanto es el kilometraje de tu camion: " << std::endl;
	std::cin >> km;
	this->km = km;
	std::cin.ignore();
}

void Camion::set_info()
{
	Vehiculo::set_info();
	set_actual_gas();
  set_max_gas();
   set_capacity_actual();
  set_max_capacity();
  set_tires();
  set_doors();
  set_mirrors();
  set_lights();
  set_km();
}

std::ostream& operator<<(std::ostream& os,const Camion& obj)
{
	os << static_cast<const Vehiculo&>(obj);
	os << "capacidad maxima: " << obj.capacidad_maxima <<
		" " << "gasolina_maxima: " << obj.gasolina_maxima << std::endl;		
	return os;
}


