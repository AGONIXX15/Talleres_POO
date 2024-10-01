#ifndef EMPLEADO_H 
#define EMPLEADO_H

#include "Persona.h"
#include <iostream>
#include <string>



class Empleado : public Persona
{
	public:
	Empleado();
	void set_salario();
	void set_horario();
	void atender();
	void organizar();
	void set_info() override;


	float salario;
	std::string horario;
	

};





#endif 
