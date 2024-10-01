
#ifndef VECTOR_PRODUCTO_H
#define VECTOR_PRODUCTO_H

#include <vector>
#include "producto.h"




class vector_producto {
public:
    std::vector<producto> productos;

    vector_producto();

    void guardar_producto(producto p);
    void mostrar_productos();
    void menu_productos();

    
};

#endif