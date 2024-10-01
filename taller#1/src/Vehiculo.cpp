#include "../include/Vehiculo.h"
#include <cstdio>
#include <string>

Vehiculo::Vehiculo(){};
// constructor de la clase vehiculo
Vehiculo::Vehiculo(std::string brand,std::string model,int sits ,int year):brand(brand),
	model(model),year(year),sits(sits){}

// frenar
void Vehiculo::frenar()
{
	std::cout << this->brand << " " << this->model << " " << "Freno" << std::endl;
}

// acelerar
void Vehiculo::acelerar()
{
	std::cout << this->brand << " " << this->model << " " << "Acelero" << std::endl;
}


void Vehiculo::set_brand()
{
	std::string brand;
	std::cout << "ingrese la marca del vehiculo" << std::endl;
	std::getline(std::cin,brand);
	this->brand = brand;
}

void Vehiculo::set_model()
{
	std::string model;
	std::cout << "ingrese el modelo del vehiculo: " << std::endl;
	std::getline(std::cin,model);
	this->model = model;
}
	void set_brand();
	void set_model();
	void set_year();
	void set_sits();
	void set_info();
void Vehiculo::set_year()
{
	int year;
	std::cout << "ingrese el año del que es su vehiculo: " << std::endl;
	std::cin >> year;
	this->year = year;
	std::cin.ignore();
}

void Vehiculo::set_sits()
{
	int sits;
	std::cout << "ingrese el numero de asientos de su vehiculo" << std::endl;
	std::cin >> sits;
	this->sits = sits;
	std::cin.ignore();
}


void Vehiculo::set_info()
{
	Vehiculo::set_brand();
	Vehiculo::set_model();
	Vehiculo::set_year();
	Vehiculo::set_sits();
}
// imprimir la informacion
 std::ostream& operator <<(std::ostream& os,const Vehiculo& v)
{
	os << "Marca: " << v.brand<< " " << "Modelo: " << v.model <<
		" " << "año: " << v.year << std::endl;
	return os;
}
