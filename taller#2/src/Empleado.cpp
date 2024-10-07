#include "../include/Empleado.h"

int Empleado::global_id = 1000;
Empleado::Empleado(){}


void Empleado::atender()
{
	std::cout << this->nombre << " " << "esta atendiendo" << std::endl;
	return;
}

void Empleado::organizar()
{
	std::cout << this->nombre << " " << "esta organizando" << std::endl;
	return;
}

void Empleado::set_salario()
{
	float salario;
	std::cout << "ingrese su salario :" << std::endl;
	std::cin >> salario;
	std::cin.ignore();
	this->salario = salario;
	return;
}

void Empleado::set_horario()
{
	std::string horario;
	std::cout << "ingrese su horario: " << std::endl;
	std::getline(std::cin,horario);
	this->horario = horario;
	return;
}

void Empleado::set_id()
{
	this->id = global_id++;
	std::cout << "su id es " << this->id << std::endl;
}


void Empleado::set_info()
{
	Persona::set_info();
	set_salario();
	set_horario();
	set_id();
	return;
}

void Empleado::mostrar_info()
{
	Persona::mostrar_info();
	std::cout << "salario: " << this->salario << " "
		<< "horario: " << this->horario << " " << "ID: " << this->id << std::endl;
	return;
}

bool Empleado::operator<(const Empleado& empleado) const
{
	return this->id < empleado.id;
}

bool Empleado::operator<(const int& id) const
{
	return this->id < id;
}

bool Empleado::operator==(const Empleado& empleado) const
{
	return this->id == empleado.id;
}

bool Empleado::operator==(const int& id) const
{
	return this->id == id;
}
