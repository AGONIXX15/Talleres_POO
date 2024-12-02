#ifndef VECTOR_CLIENTE_H
#define VECTOR_CLIENTE_H
#include <vector>

#include "Cliente.h"
#include "Crud.h"
class Vector_cliente : public Crud {
public:
  Vector_cliente();
  void crear() override; 
  void eliminar() override; // elimina un cliente
  void actualizar() override; // actualiza la informacion de los clientes
  void leer() override; // muestra la informacion de los clientes
  static void crear(Cliente &c); // crea un cliente
  static void eliminar(const int &id); // elimina un cliente
  static void actualizar(const int &id); // actualiza la informacion de los clientes
  static void leer(bool); // muestra la informacion de los clientes
  static void menu_clientes(); // menu de clientes

  static std::vector<Cliente> v; // vector de clientes
};

#endif
