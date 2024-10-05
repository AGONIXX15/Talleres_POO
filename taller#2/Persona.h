#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <ostream>
#include <string>


class Persona 
{
	public:
	Persona();
	void set_nombre();
	void set_fecha();
	void set_edad();
	virtual void set_info();
	friend std::ostream& operator<<(std::ostream& os,const Persona& p);
	std::string nombre;
	std::string fecha;
	int edad; 
	
};



#endif 
