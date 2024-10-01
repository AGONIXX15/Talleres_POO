#ifndef CAMION_BASURA_H
#define CAMION_BASURA_H


#include "Camion.h"
class Camion_basura: public Camion
{
	public:
		std::string trituradora;

		Camion_basura();
		void triturar_basura();
		void set_trituradora();
		void set_info() override;

		friend std::ostream& operator<<(std::ostream& os,const Camion_basura& obj);
};



#endif
