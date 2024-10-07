#ifndef EMPLEADO_H 
#define EMPLEADO_H

#include "Persona.h"
#include <iostream>
#include <string>



class Empleado : public Persona
{
	public:
	Empleado();
	void atender();
	void organizar();
	void set_salario();
	void set_horario();
	void set_id();
	void set_info() override;
	void mostrar_info() override;
	bool operator<(const Empleado &empleado) const;
	bool operator<(const int&) const;
	bool operator==(const Empleado &empleado) const;
	bool operator==(const int&) const;


	float salario;
	std::string horario;
	int id;
	static int global_id;
	

};





#endif 
