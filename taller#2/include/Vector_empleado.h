#ifndef VECTOR_EMPLEADO_H
#define VECTOR_EMPLEADO_H


#include "Crud.h"
#include "Empleado.h"
#include <vector>
class Vector_empleado: public Crud
{
	public:
		Vector_empleado();
		void crear() override;
		void crear(Empleado obj);
		void eliminar() override;
		void eliminar(const int& id);
		void actualizar() override;
		void actualizar(const int& id);
		void leer() override;
		std::vector<Empleado> vector;
		
};


#endif
