#include "../include/Cliente.h"
#include <iostream>
#include <string>


int Cliente::global_id = 3000;
Cliente::Cliente(){}


void Cliente::set_dinero()
{
	float dinero;
	std::cout << "cuanto dinero tiene para pagar?:" << std::endl;
	std::cin >> dinero;
	std::cin.ignore();
	this-> dinero = dinero;
	return;
}

void Cliente::set_dinero(float dinero)
{
	this->dinero = dinero;
	return;
}

void Cliente::set_id()
{
	this->id = global_id++;
	std::cout << "su id es " << this->id  << std::endl;
	return;
}

void Cliente::comprar()
{
	// implementar comprar para el cliente cuando ya este lo demas
	return;
}

void Cliente::set_info()
{
	Persona::set_info();
	set_dinero();
	set_id();
	return;
}

void Cliente::mostrar_info()
{
	Persona::mostrar_info();
	std::cout << "dinero : " << this->dinero << std::endl;
	return;
}

bool Cliente::operator <(const Cliente& other)
{
	return this->id < other.id;
}

bool Cliente::operator <(const int& id) const
{
	return this->id < id;
}

bool Cliente::operator ==(const Cliente& other) const
{
	return this->id == other.id;
}

bool Cliente::operator ==(const int& id) const
{
	return this->id == id;
}
