#ifndef BICICLETA_H
#define BICICLETA_H
#include "Motocicleta.h"



class Bicicleta: public Motocicleta
{
	public:
		std::string pedales;
		std::string cadena;
		std::string timbre;

		Bicicleta();
		void pedalear();
		void sonar_timbre();
		void cambios();
		void set_pedales();
		void set_cadena();
		void set_timbre();
		void set_info() override;

		friend std::ostream& operator<<(std::ostream& os,const Bicicleta&  obj);
};
#endif
