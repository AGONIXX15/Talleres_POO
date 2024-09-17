#ifndef SCOOTER_H
#define SCOOTER_H


#include "Motocicleta.h"
class Scooter: public Motocicleta
{
	public:
		std::string bateria;
		std::string pata_cabra;

		Scooter();
		void recargar();
		void set_bateria();
		void set_pata_cabra();
		void set_info() override;

		friend std::ostream& operator<<(std::ostream& os,const Scooter& obj);
};

#endif
