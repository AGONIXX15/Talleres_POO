#ifndef CAMION_H
#define CAMION_H




#include "Vehiculo.h"
class Camion : public Vehiculo
{
	public:

		Camion();
		std::string gasolina_actual;
		std::string	 gasolina_maxima;
		std::string capacidad_actual;
		std::string capacidad_maxima;
		int tires;
		int doors;
		int mirrors;
		int lights;
		std::string km;

		void cargar_cargamento();
		void descargar_cargamento();
		void llenar_combustible();
		void set_actual_gas();
		void set_max_gas();
		void set_capacity_actual();
		void set_max_capacity();
		void set_tires();
		void set_doors();
		void set_mirrors();
		void set_lights();
		void set_km();
		void set_info() override;

		friend std::ostream& operator<<(std::ostream& os,const Camion& obj);




};

#endif
