#ifndef ID_H
#define ID_H
#include <vector>

#include "Crud.h"
class ID : public Crud
{
	public:
	ID();
	void crear();
	void eliminar();
	void actualizar();
	void leer();
	std::vector <int> vector_id;
};


#endif
