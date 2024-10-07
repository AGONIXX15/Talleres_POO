#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>


class Persona 
{
	public:
	Persona();
	void set_nombre();
	void set_fecha();
	void set_edad();
	virtual void set_info();
	virtual void mostrar_info();
	std::string nombre;
	std::string fecha;
	int edad; 
};



#endif 
