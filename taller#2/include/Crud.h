#ifndef CRUD_H
#define CRUD_H


class Crud 
{
	virtual void crear() = 0; 
	virtual void eliminar() = 0;
	virtual void actualizar() = 0;
	virtual void leer() = 0; 
};


#endif