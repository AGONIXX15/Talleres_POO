#ifndef VECTOR_CLIENTE_H
#define VECTOR_CLIENTE_H
#include <vector>



#include "Crud.h"
#include "Cliente.h"
class Vector_cliente : public Crud
{
	public:
		Vector_cliente();
		void crear() override;
		void crear(Cliente& c) ;
		void eliminar() override ;
		void eliminar(const int& id);
		void actualizar() override;
		void actualizar(const int& id);
		void leer() override;
		std::vector<Cliente> v;
		
};



#endif
