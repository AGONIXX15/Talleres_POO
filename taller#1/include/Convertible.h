#ifndef CONVERTIBLE_H
#define CONVERTIBLE_H

#include "Auto.h"
#include <iostream>
#include <string>


class Convertible : public Auto
{
	public:
		std::string tipo_techo;	
	
		Convertible();

		
		void bajar_techo();
		void subir_techo();
		void set_techo();
		void set_info() override;

		friend std::ostream& operator<<(std::ostream& os, const Convertible& obj);
};


#endif
