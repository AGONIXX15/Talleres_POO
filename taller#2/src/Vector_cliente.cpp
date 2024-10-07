#include "../include/Vector_cliente.h"
#include "../include/Funciones.h"
#include <vector>
#include <algorithm>


Vector_cliente::Vector_cliente(){}

// crear un cliente 
void Vector_cliente::crear()
{
	Cliente c;
	c.set_info();
	this->v.push_back(c);
}

// crear cliente por parametro
void Vector_cliente::crear(Cliente& c)
{
	c.set_info();
	this->v.push_back(c);
}

void Vector_cliente::eliminar()
{
	int id;
	std::cout << "ingrese el id del cliente que va a eliminar" << std::endl;
	std::cin >> id; 
	std::cin.ignore();
	int resultado = busqueda_binaria(this->v,id);
	if (resultado != -1)
	{
		this->v.erase(v.begin() + resultado);
		std::cout << "se ha eliminado con exito el cliente" << std::endl;
	}else 
		std::cout << "no se encontro el cliente a eliminar" << std::endl;
}

void Vector_cliente::eliminar(const int& id)
{
	int resultado = busqueda_binaria(this->v,id);
	if (resultado != -1)
	{
		this->v.erase(v.begin() + resultado);
		std::cout << "se ha eliminado con exito el cliente" << std::endl;
	}else 
		std::cout << "no se encontro el cliente a eliminar" << std::endl;
}

//actualizar a el cliente
void Vector_cliente::actualizar()
{
	int id;
	std::cout << "ingrese el id del cliente que desea actualizar" << std::endl;
	std::cin >> id;
	std::cin.ignore();	
	int resultado = busqueda_binaria(this->v,id);
	if(resultado != -1)
	{
		std::cout << "se encontro el cliente a actualizar" << std::endl;
		this->v[resultado].set_nombre();
		this->v[resultado].set_edad();
		this->v[resultado].set_fecha();
		this->v[resultado].set_dinero();

	}
	else 
	{
		std::cout << "no se encontro el cliente a actualizar" << std::endl;
	}
}

// no actualizar al cliente
void Vector_cliente::actualizar(const int& id)
{

	int resultado = busqueda_binaria(this->v,id);
	if(resultado != -1)
	{
		std::cout << "se encontro el cliente a actualizar" << std::endl;
		this->v[resultado].set_nombre();
		this->v[resultado].set_edad();
		this->v[resultado].set_fecha();
		this->v[resultado].set_dinero();
	}
	else 
	{
		std::cout << "no se encontro el cliente a actualizar" << std::endl;
	}
}

//
void Vector_cliente::leer()
{
	for(auto i : this->v)
	{
		i.mostrar_info();
	}
}
