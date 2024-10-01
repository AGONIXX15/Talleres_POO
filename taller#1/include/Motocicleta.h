#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H


#include "Vehiculo.h"
class Motocicleta: public Vehiculo
{
	public:
		std::string casco;

		Motocicleta();

		void hacer_caballito();
		void balanceo();
		void set_casco();
		virtual void set_info() override;

		friend std::ostream& operator<<(std::ostream& os,const Motocicleta& obj);
};


#endif
