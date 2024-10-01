#ifndef AUTO_H
#define AUTO_H
#include "Vehiculo.h"

class Auto : public Vehiculo 
{
	public:
		
		Auto();
		Auto(std::string brand ,std::string model ,int sits,int year,int lights );
			
		friend std::ostream& operator<<(std::ostream& obj,const Auto& car);
		
		void manejar();
		void abrir_maletero();
		void cerrar_maletero();
		void abrir_puerta();
		void cerrar_puerta();
		void prender_luces();
		void apagar_luces();
		void ajustar_asiento();
		void kilometraje();
		void llenar_combustible();
		void set_tires();
		void set_doors();
		void set_mirrors();
		void set_lights();
		void set_km();
		virtual void set_info()  override;

		int tires;
		int doors;
		int mirrors;
		int lights;
		std::string km;

};


#endif // AUTO_H
