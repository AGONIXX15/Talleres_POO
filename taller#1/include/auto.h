#ifndef AUTO_H
#define AUTO_H
#include "vehiculo.h"

class Auto : public Vehiculo 
{
	public:
		int Tires;
		int Doors;
		int Mirrors;

		Auto(std::string ,std::string ,int, int );
			
		friend std::ostream& operator<<(std::ostream& obj,const Auto& car);
		
		void abrir_maletero();
		

};


#endif // AUTO_H
