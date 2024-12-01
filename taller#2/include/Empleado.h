#ifndef EMPLEADO_H 
#define EMPLEADO_H

#include "Persona.h"
#include <iostream>
#include <string>



class Empleado : public Persona
{
	public:
	Empleado();
	void atender(); // atención al cliente
	void organizar(); // organizar productos
	void set_salario(); // establecer salario
	void set_horario(); // establecer horario
	void set_id(); // establecer id
	void set_info() override; // establecer información
	void mostrar_info() override; // mostrar información
	void vender(); // vender productos
	static void menu_empleados(); // menú de empleados

	bool operator<(const Empleado &empleado) const; // sobrecarga de operador
	// para comparar empleados
	bool operator<(const int&) const; // sobrecarga de operador < 
	// para comparar empleados con un entero(id)
	bool operator==(const Empleado &empleado) const; // sobrecarga de operador ==
	bool operator==(const int&) const; // sobrecarga de operador ==

	float salario;
	std::string horario;
	int id;
	static int global_id;
};





#endif 
