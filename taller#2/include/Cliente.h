#ifndef CLIENTE_H 
#define CLIENTE_H



#include "Persona.h"
class Cliente: public Persona
{
	public:
		Cliente();
		void set_dinero();
		void set_dinero(float dinero);
		void comprar();
		void set_info() override;

		float dinero;

};




#endif
