
#ifndef VECTOR_PRODUCTO_H
#define VECTOR_PRODUCTO_H

#include <vector>
#include "producto.h"
#include "Crud.h"




class Vector_producto:public Crud {
public:
    std::vector<producto> productos;

    Vector_producto();
    void crear() override;
    void actualizar()  override;
    void eliminar()  override;

    void crear(producto p) ;
    void leer() override;
    void actualizar(int id);
    void eliminar(int id) ;

    void menu_productos();

    
};

#endif