#ifndef CLIENTE_H 
#define CLIENTE_H



#include "Persona.h"
class Cliente: public Persona
{
	public:
		Cliente();
		void set_dinero();
		void set_dinero(float dinero);
		void set_id();
		void comprar();
		void set_info() override;
		void mostrar_info() override;
		bool operator<(const Cliente& other);
		bool operator<(const int&) const;
		bool operator==(const Cliente& other) const;
		bool operator==(const int&) const;

		float dinero;
		int id;
		static int global_id;

};




#endif
