#ifndef MENU_H
#define MENU_H


#include "Facturas.h"
class Menu {
public:
  Menu();
  void menu_compra();
  void menu_productos();  
  void menu_empleado();
  void menu_clientes();
  void menu_facturas();// terminar de implementar
  void ver_factura(Facturas f);

  // mejorar aspecto del menu xd
  void menu_general();
  
  
};


#endif
