#include "../include/Empleado.h"

Empleado::Empleado(){}


void Empleado::atender()
{
	std::cout << this->nombre << " " << "esta atendiendo" << std::endl;
}

void Empleado::organizar()
{
	std::cout << this->nombre << " " << "esta organizando" << std::endl;
}

void Empleado::set_salario()
{
	float salario;
	std::cout << "ingrese su salario :" << std::endl;
	std::cin >> salario;
	std::cin.ignore();
	this->salario = salario;
}

void Empleado::set_horario()
{
	std::string horario;
	std::cout << "ingrese su horario: " << std::endl;
	std::getline(std::cin,horario);
	this->horario = horario;
}


void Empleado::set_info()
{
	Persona::set_info();
	set_salario();
	set_horario();
}
