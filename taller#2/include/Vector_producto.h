#ifndef VECTOR_PRODUCTO_H
#define VECTOR_PRODUCTO_H

#include "../include/Crud.h"
#include "../include/producto.h"
#include <vector>

/* se usa para el manejo y gestion de los productos de la tienda
 * solo en ese caso debe usarse*/
class Vector_producto : public Crud {
public:
  Vector_producto();          // constructor
  void crear() override;      // metodos de la clase Crud
  void actualizar() override; // metodos de la clase Crud
  void eliminar() override;   // metodos de la clase Crud
   void leer() override;       // muestra los productos del vector

  static void crear(producto &p);  // agrega un producto al vector
  static void actualizar(int &id); // actualiza un producto del vector
  static void eliminar(int id);    // elimina un producto del vector
  static void menu_productos();           // menu de productos
  static void mostrar_info();              // muestra la informacion de los productos

  static std::vector<producto> productos; // Vector de productos static
};

#endif
