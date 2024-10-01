#ifndef MULA_H
#define MULA_H




#include "Camion.h"
#include <ostream>

class Mula : public Camion 
{
	public:
		Mula();
		int ejes;
		

		void acoplar_ejes();
		void desacoplar_ejes();
		void set_ejes();
		void set_info() override;

		friend std::ostream& operator<<(std::ostream& os,const Mula& obj);

};










#endif
