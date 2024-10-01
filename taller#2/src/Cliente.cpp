#include "../include/Cliente.h"
#include <iostream>
#include <string>


Cliente::Cliente(){}


void Cliente::set_dinero()
{
	float dinero;
	std::cout << "cuanto dinero tiene para pagar?:" << std::endl;
	std::cin >> dinero;
	std::cin.ignore();
}

void Cliente::set_dinero(float dinero)
{
	this->dinero = dinero;
}

void Cliente::comprar()
{
	// implementar comprar para el cliente cuando ya este lo demas
}

void Cliente::set_info()
{
	Persona::set_info();
	set_dinero();
}
