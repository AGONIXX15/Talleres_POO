#include "../include/Vector_empleado.h" 
#include "../include/Funciones.h"




Vector_empleado::Vector_empleado(){}

void Vector_empleado::crear()
{
	Empleado obj;
	obj.set_info();
	this->vector.push_back(obj);
	return;
}

void Vector_empleado::eliminar()
{
	int id;
	std::cout << "ingrese el id del empleado que va a eliminar" << std::endl;
	std::cin >> id; 
	std::cin.ignore();
	int resultado = busqueda_binaria(this->vector,id);
	if (resultado != -1)
	{
		this->vector.erase(vector.begin() + resultado);
		std::cout << "se ha eliminado con exito el empleado" << std::endl;
	}else 
		std::cout << "no se encontro el empleado a eliminar" << std::endl;
}

void Vector_empleado::eliminar(const int& id)
{
	int resultado = busqueda_binaria(this->vector,id);
	if (resultado != -1)
	{
		this->vector.erase(vector.begin() + resultado);
		std::cout << "se ha eliminado con exito el empleado" << std::endl;
	}else 
		std::cout << "no se encontro el empleado a eliminar" << std::endl;
}

//actualizar a el empleado
void Vector_empleado::actualizar()
{
	int id;
	std::cout << "ingrese el id del empleado que desea actualizar" << std::endl;
	std::cin >> id;
	std::cin.ignore();	
	int resultado = busqueda_binaria(this->vector,id);
	if(resultado != -1)
	{
		std::cout << "se encontro el empleado a actualizar" << std::endl;
		this->vector[resultado].set_nombre();
		this->vector[resultado].set_edad();
		this->vector[resultado].set_fecha();
		this->vector[resultado].set_horario();
		this->vector[resultado].set_salario();
	}
	else 
	{
		std::cout << "no se encontro el empleado a actualizar" << std::endl;
	}
}

// no actualizar al empleado
void Vector_empleado::actualizar(const int& id)
{

	int resultado = busqueda_binaria(this->vector,id);
	if(resultado != -1)
	{
		std::cout << "se encontro el empleado a actualizar" << std::endl;
		this->vector[resultado].set_nombre();
		this->vector[resultado].set_edad();
		this->vector[resultado].set_fecha();
		this->vector[resultado].set_horario();
		this->vector[resultado].set_salario();
	}
	else 
	{
		std::cout << "no se encontro el empleado a actualizar" << std::endl;
	}
}


void Vector_empleado::leer()
{
	for(auto i : this->vector)
	{
		i.mostrar_info();
	}
}
