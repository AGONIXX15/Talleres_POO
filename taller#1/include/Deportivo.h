#ifndef DEPORTIVO_H
#define DEPORTIVO_H




#include "Auto.h"
#include <iostream>
class Deportivo: public Auto
{
	public:

		Deportivo();
		std::string aerodinamico = "aerodinamico";
		std::string adherencia = "tiene adherencia";
		std::string nitro = "tiene nitro";

		void aplicar_nitro();
		void aplicar_turbo();
		void set_info() override;
		
		friend std::ostream& operator<<(std::ostream& os,const Deportivo& obj);

};

#endif
