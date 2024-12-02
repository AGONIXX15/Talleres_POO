#ifndef MENU_H
#define MENU_H
#include "Cliente.h"
#include "Facturas.h"


class Menu {
public:
  Menu();
  static void menu_compra(Cliente& obj);
  static void menu_productos();  
  static void menu_empleado();
  static void menu_clientes();
  static void menu_facturas();// terminar de implementar
  static void ver_factura(Facturas& f);
  static void iniciar_sesion_cliente();

  // mejorar aspecto del menu xd
  static void menu_general();
  
  
};


#endif
