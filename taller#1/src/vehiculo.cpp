#include "../include/vehiculo.h"

// constructor de la clase vehiculo
Vehiculo::Vehiculo(std::string brand,std::string model,int sits ,int year):Brand(brand),
	Model(model),Year(year),Sits(sits){}

// frenar
void Vehiculo::frenar()
{
	std::cout << this->Brand << " " << this->Model << " " << "Freno" << std::endl;
}

// acelerar
void Vehiculo::acelerar()
{
	std::cout << this->Brand << " " << this->Model << " " << "Acelero" << std::endl;
}

// imprimir la informacion
 std::ostream& operator <<(std::ostream& os,const Vehiculo& v)
{
	os << "Marca: " << v.Brand<< " " << "Modelo: " << v.Model <<
		" " << "año: " << v.Year << std::endl;
	return os;
}
