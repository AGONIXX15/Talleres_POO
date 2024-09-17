#include "../include/Convertible.h"
#include <iterator>
#include <ostream>
#include <string>


Convertible::Convertible(){};

void Convertible::bajar_techo()
{
	std::cout << "Bajando el techo" << std::endl;
}

void Convertible::subir_techo()
{
	std::cout << "Subiendo el techo" << std::endl;
}

void Convertible::set_techo()
{
	std::string techo;
	std::cout << "ingrese el materia del techo del convertible" << std::endl;
	std::getline(std::cin,techo);
		this->tipo_techo = techo;
}



void Convertible::set_info()
{
	Auto::set_info();
	set_techo();
}


std::ostream& operator<<(std::ostream& os,const Convertible& obj)
{
	os << static_cast<const Auto&>(obj);
	os << "tipo de techo: " << obj.tipo_techo << std::endl;
	return os;
}
