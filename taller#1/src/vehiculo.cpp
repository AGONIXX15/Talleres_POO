#include "../include/vehiculo.h"

// constructor de la clase vehiculo
Vehiculo::Vehiculo(std::string marca,std::string modelo,int year):Marca(marca),
	Modelo(modelo),Year(year){}

// frenar
void Vehiculo::frenar()
{
	std::cout << this->Marca << " " << this->Modelo << " " << "Freno" << std::endl;
}

// acelerar
void Vehiculo::acelerar()
{
	std::cout << this->Marca << " " << this->Modelo << " " << "Acelero" << std::endl;
}

// imprimir la informacion
 std::ostream& operator <<(std::ostream& os,const Vehiculo& v)
{
	os << "Marca: " << v.Marca << " " << "Modelo: " << v.Modelo <<
		" " << "anio: " << v.Year << std::endl;
	return os;
}
