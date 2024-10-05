#include "Persona.h"


Persona::Persona(){}

// setear el nombre de la persona 
void Persona::set_nombre()
{
	std::string nombre;
	std::cout << "ingrese su nombre : " << std::endl;
	std::getline(std::cin,nombre);
	this->nombre = nombre;
}


// setear la fecha de nacimiento de la persona
void Persona::set_fecha()
{
	std::string fecha;
	std::cout << "ingrese su fecha de nacimiento en el formato(d/mm/yy) : " << std::endl;
	std::cin >> fecha;
	this->fecha = fecha;
}

void Persona::set_edad()
{
	int edad;
	std::cout << "ingrese su edad:" << std::endl;
	std::cin >> edad; 
	std::cin.ignore();
	this->edad = edad;
}

void Persona::set_info()
{
	set_nombre();
	set_fecha();
	set_edad();
}

	std::ostream& operator<<(std::ostream& os,const Persona& p);
