#ifndef AUTO_H
#define AUTO_H
#include "vehiculo.h"

class Auto : public Vehiculo 
{
	public:

		Auto(std::string brand ,std::string model ,int sits,int year,int lights );
			
		friend std::ostream& operator<<(std::ostream& obj,const Auto& car);
		
		void abrir_maletero();
		void abrir_puerta();
		void prender_luces();

		int Tires;
		int Doors;
		int Mirrors;
		int Lights;

};


#endif // AUTO_H
